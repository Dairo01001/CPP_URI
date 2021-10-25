var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');

lines.pop();

lines = lines.reverse();
lines.map((num, i) => console.log(`N[${i}] = ${num}`));