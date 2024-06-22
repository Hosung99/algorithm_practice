const fs = require("fs");

const input = fs.readFileSync("/dev/stdin").toString().trim().split("\n");

function solution() {
  let y = parseInt(input[0]);
  return y - 543;
}

console.log(solution());
