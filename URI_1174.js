var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');

let number;
let ans;

function solve() {
    for (let i = 0; i < lines.length - 1; i++) {
        number = Number(lines[i]);
        if (number <= 10) {
            ans = Math.floor(number) !== number ? lines[i] : number + '.0';
            console.log(`A[${i}] = ${ans}`);
        }
    }
}

solve();