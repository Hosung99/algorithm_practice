const fs = require("fs");

const input = fs.readFileSync("dev/stdin").toString().trim().split("\n");

function solution() {
  let ans = "";
  let N = parseInt(input[0]);
  for (let i = 0; i < N; i++) {
    ans += "SciComLove\n";
  }
  return ans;
}

console.log(solution());
