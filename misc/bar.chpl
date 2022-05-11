extern proc mrGetKeyExt(ref addr: int, ref key: uint(64)): void;

var x = 4242;
var key: uint(64);
var offset: uint(64);

mrGetKeyExt(x, key, offset);

on Locales[numLocales-1] {
    x = 4343;
    var myKey = key;
    var myOffset = offset;
}

writeln("x = ", x);