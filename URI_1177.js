var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');

let T = +lines[0];
let j = 0;

while (j < 1000) {
    for (let i = 0; i < T; i++) {
        console.log(`N[${j}] = ${i}`)
        j++;
        if (j >= 1000) break;
    }
}