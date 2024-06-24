const fs = require("fs");

const input = fs.readFileSync("/dev/stdin").toString().split("\n");

function solution() {
  let ans = "";
  let T = parseInt(input[0]);
  for (let i = 1; i <= T; i++) {
    const [A, B] = input[i].split(" ").map(Number);
    ans += "Case #" + i + ": " + (A + B) + "\n";
  }
  return ans;
}

console.log(solution());
