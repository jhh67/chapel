/*
 * Copyright 2021 Hewlett Packard Enterprise Development LP
 * Other additional copyright holders may be indicated within.
 *
 * The entirety of this work is licensed under the Apache License,
 * Version 2.0 (the "License"); you may not use this file except
 * in compliance with the License.
 *
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

module MasonArgParse {
  private use List;
  private use Map;
  private use IO;
  private use Sort;

  const DEBUG=false;
  // TODO: Implement required/optional flag
  // TODO: Implement default values for optional opts
  // TODO: Verify no duplicate names, flags defined by dev
  // TODO: Make sure we don't shadow Chapel flags
  // TODO: Make sure we don't shadow config vars  
  // TODO: Implement Help message and formatting
  // TODO: Add bool flags
  // TODO: Add int opts
  // TODO: Add positional arguments
  // TODO: Add public github issue when available

  if chpl_warnUnstable then
    compilerWarning("ArgumentParser is unstable.");

  // A generic argument parser error
  class ArgumentError : Error {
    var _msg:string;
    
    proc init(msg:string) {
      this._msg = msg;
    }

    override proc message() {
      return _msg;
    }
  }
  
  // indicates a result of argument parsing
  class Argument {
    //indicates if an argument was entered on the command line
    var _present: bool=false;
    // hold the values of the argument from the command line
    var _values: list(string);     
    
    proc value(){     
      return this._values.first();
    }

    iter values(){
      for val in _values {
        yield val;
      }      
    }

    proc hasValue(){
      return !this._values.isEmpty() && this._present;
    }
  }

  // stores the definition of an option
  class Action {
    // friendly name for this argument
    var _name:string;
    // number of option flags that can indicate this argument
    var _numOpts:int;
    // value of option flag(s) that can indicate this argument
    var _opts:[0.._numOpts-1] string;
    // number of acceptable values to be present after argument is indicated
    var _numArgs:range;

    // TODO: Decouple the argument from the action
    // maybe pass a list to fill by reference and have the argparser populate
    // the argument instead?
    // also need a bool by ref to indicate presence of arg or not
    proc _match(args:[?argsD]string, startPos:int, myArg:Argument) throws {
      var high = _numArgs.high;
      debugTrace("expecting between " + 
                 _numArgs.low:string + " and " + high:string);
      var matched = 0;
      var pos = startPos;
      var next = pos+1;
      debugTrace("starting at pos: " + pos:string);
      while matched < high && next <= argsD.high && !args[next].startsWith("-") 
      {
        pos=next;
        next+=1;
        matched+=1;
        myArg._values.append(args[pos]);
        myArg._present=true;
        debugTrace("matched val: " + args[pos] + " at pos: " + pos:string);     
      }
      if matched < this._numArgs.low {
        throw new ArgumentError("\\".join(_opts) + " not enough values");
      }
      return next;
    }
 }

  record argumentParser {
    // store the arguments by their familiar names
    var _result: map(string, shared Argument);
    // store the actions by their familiar names
    var _actions: map(string, owned Action);
    // map an option string to its familiar name
    var _options: map(string, string);

    proc parseArgs(arguments:[?argsD] string) throws {
      compilerAssert(argsD.rank==1, "parseArgs requires 1D array");
      debugTrace("start parsing args");   
      var k = 0;
      // identify optionIndices where opts start
      var optionIndices : map(string, int);
      var argsList = new list(arguments);
      
      for i in argsD {
        const arrElt = arguments[i];
        // look for = sign after opt, split into two elements
        if arrElt.startsWith("-") && arrElt.find("=") > 0 {
          var elems = new list(arrElt.split("=", 1));
          // replace this opt=val with opt val
          var idx = argsList.indexOf(arrElt);
          argsList.pop(idx);
          argsList.insert(idx, elems.toArray());
        }
      }
      
      for i in argsList.indices {
        const argElt = argsList[i];    
        if _options.contains(argElt) {
          debugTrace("found option " + argElt);
          // create an entry for this index and the argument name
          optionIndices.addOrSet(_options.getValue(argElt), i);
          debugTrace("added option " + argElt);
        } 
      }
      // get this as an array so we can sort it, because maps are order-less
      // TODO: Can we eliminate this extra logic by using an OrderedMap type?
      var arrayoptionIndices = optionIndices.toArray();
      sort(arrayoptionIndices);      
      // try to match for each of the identified options
      for (name, idx) in arrayoptionIndices {
        // get a ref to the argument
        var arg = _result.getReference(name);
        debugTrace("got reference to argument " + name);
        // get the action to match
        const act = _actions.getBorrowed(name);
        // try to match values in argstring, get the last value position
        const endPos = act._match(argsList.toArray(), idx, arg);
        debugTrace("got end position " + endPos:string);
        k+=1;
        debugTrace("k val = " + k:string);
        debugTrace("arrayoptionIndices.size is " 
                 + arrayoptionIndices.size:string);
        debugTrace("argsList.size = " + argsList.size:string);
        debugTrace("argsD.high = " + argsD.high:string);
        // make sure we don't overrun the array,
        // then check that we don't have extra values
        if k < arrayoptionIndices.size {
          if endPos != arrayoptionIndices[k][1] {
            debugTrace("endpos != arrayoptionIndices[k][1] :"+endPos:string+" "
                     + arrayoptionIndices[k][1]:string);
            debugTrace("arrayoptionIndices " + arrayoptionIndices:string);
            throw new ArgumentError("\\".join(act._opts) + " has extra values");
          }
        // check that we consumed all the values in the input string
        }else if endPos <= argsList.size-1 {
          throw new ArgumentError("\\".join(act._opts) + " has extra values");
        }
      }
      // make sure all options defined got values if needed
      _checkSatisfiedOptions();

      // check for when arguments passed but none defined
      if argsList.size > 0 && this._actions.size == 0 {
        throw new ArgumentError("unrecognized options/values encountered: " +
                                " ".join(argsList.these()));
      }
    }

    proc _checkSatisfiedOptions() throws {
      // make sure we satisfied options that need at least 1 value
      for name in this._actions.keys() {
        const act = this._actions.getBorrowed(name);
        const arg = this._result.getReference(name);
        if act._numArgs.low > 0 && !arg._present {
          throw new ArgumentError("\\".join(act._opts) + " not enough values");
        }        
      }
    }

    // define a new string option with fixed number of values expected
    proc addOption(name:string,
                   opts:[]string,
                   numArgs:int) throws {
      return addOption(name=name,
                      opts=opts,
                      numArgs=numArgs..numArgs);
    }

    proc addOption(name:string,
                   opts:[]string,
                   numArgs:range(boundedType=BoundedRangeType.boundedLow)) 
                   throws {
      return addOption(name=name,
                      opts=opts,
                      numArgs=numArgs.low..max(int));
    }

    // define a new string option with range of values expected
    proc addOption(name:string,
                   opts:[?optsD]string,
                   numArgs:range) throws {
      
      for i in optsD {
        if !opts[i].startsWith("-") {
          throw new ArgumentError("Use '-' or '--' to indicate opt flags. " +
                                  "Positional arguments not yet supported");
        }
      }
      
      var action = new owned Action(_name=name, 
                                    _numOpts=opts.size,
                                    _opts=opts,
                                    _numArgs=numArgs);
      // collect all the option strings
      for opt in opts do _options.add(opt, name);
      // store the action
      _actions.add(name, action);
      //create, add, and return the shared argument
      var arg = new shared Argument();
      this._result.add(name, arg);
      return arg;
    }
  }
  
  proc debugTrace(msg:string) {
    if DEBUG then try! {stderr.writeln(msg);}
  }
}
