const fs = require("fs");

const input = fs.readFileSync("/dev/stdin").toString().trim().split("\n");

function solution() {
  let N = parseInt(input[0]);
  let sum = "";
  for (let i = 0; i < N; i += 4) {
    sum += "long ";
  }
  sum += "int";
  return sum;
}

console.log(solution());
