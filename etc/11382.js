const fs = require("fs");

const input = fs.readFileSync("/dev/stdin").toString().trim().split(" ");

function solution() {
  let [a, b, c] = [input[0], input[1], input[2]];
  let ans = BigInt(parseInt(a)) + BigInt(parseInt(b)) + BigInt(parseInt(c));
  return ans + " ";
}

console.log(solution());
