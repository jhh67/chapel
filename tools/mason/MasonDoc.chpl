/*
 * Copyright 2020-2025 Hewlett Packard Enterprise Development LP
 * Copyright 2004-2019 Cray Inc.
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

use ArgumentParser;
use FileSystem;
use IO;
use MasonHelp;
use MasonUtils;

proc masonDoc(args: [] string) throws {

  var parser = new argumentParser(helpHandler=new MasonDocHelpHandler());

  parser.parseArgs(args);

  try! {
    const tomlName = 'Mason.toml';
    const cwd = here.cwd();

    const projectHome = getProjectHome(cwd, tomlName);
    const tomlPath = projectHome + "/" + tomlName;

    const toParse = open(projectHome + "/" + tomlName, ioMode.r);
    var tomlFile = parseToml(toParse);

    const projectName = tomlFile["brick"]!["name"]!.s;
    const projectFile = projectName + '.chpl';

    if isDir(projectHome + '/src/') {
      if isFile(projectHome + '/src/' + projectFile) {
        // Must use relative paths with chpldoc to prevent baking in abs paths
        here.chdir(projectHome);

        const command = 'chpldoc src/' + projectFile + ' -o doc/ --process-used-modules';
        writeln(command);
        runCommand(command);
      }
    }
    else {
      writeln('Mason could not find the project to document!');
      runCommand('chpldoc');
    }
  }
  catch e: MasonError {
    stderr.writeln(e.message());
  }
}
