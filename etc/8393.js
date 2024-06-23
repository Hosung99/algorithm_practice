const fs = require("fs");

const input = fs.readFileSync("/dev/stdin").toString().trim().split(" ");

function solution() {
  let n = parseInt(input[0]);
  let sum = 0;
  for (let i = 1; i <= n; i++) {
    sum += i;
  }
  return sum;
}

console.log(solution());
