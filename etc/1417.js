const fs = require("fs");

let input = fs
  .readFileSync("/dev/stdin")
  .toString()
  .trim()
  .split("\n")
  .map(Number);

function solution() {
  let dasom = input[1];
  input.shift();
  input.shift();
  input.sort((a, b) => b - a);
  let ans = 0;
  while (dasom <= input[0]) {
    dasom++;
    input[0]--;
    ans++;
    input.sort((a, b) => b - a);
  }
  return ans;
}

console.log(solution());
