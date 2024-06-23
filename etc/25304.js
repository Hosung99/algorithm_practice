const fs = require("fs");

const input = fs.readFileSync("/dev/stdin").toString().trim().split("\n");

function solution() {
  let [X, N] = [parseInt(input[0]), parseInt(input[1])];
  let sum = 0;
  for (let i = 2; i < input.length; i++) {
    let [a, b] = input[i].split(" ").map(Number);
    sum += a * b;
  }
  return sum === X ? "Yes" : "No";
}

console.log(solution());
