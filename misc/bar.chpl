extern proc mrGetKeyExt(ref addr: int, ref key: uint(64)): void;

var x = 4242;
var key: uint(64);

mrGetKeyExt(x, key);

on Locales[numLocales-1] {
    x = 4343;
    var y = key;
}

writeln("x = ", x);