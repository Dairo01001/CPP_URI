var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');

let a = 0;
let b = 1;
let aux = 0;
let fibonacci = [a, b];

for (let i = 2; i <= 60; i++) {
    fibonacci.push(a + b);
    aux = a;
    a = b;
    b = aux + b;
}

for (let i = 1; i <= +lines[0]; i++) {
    console.log(`Fib(${lines[i]}) = ${fibonacci[+lines[i]]}`)
}

