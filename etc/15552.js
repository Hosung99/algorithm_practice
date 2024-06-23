const fs = require("fs");

const input = fs.readFileSync("/dev/stdin").toString().trim().split("\n");

function solution() {
  let T = parseInt(input[0]);
  let sum = "";
  for (let i = 1; i <= T; i++) {
    let [A, B] = input[i].split(" ").map(Number);
    sum += (A + B).toString() + "\n";
  }
  return sum;
}

console.log(solution());
