const fs = require("fs");

const input = fs.readFileSync("/dev/stdin").toString().split("\n");

function solution() {
  let [N, M] = input[0].split(" ").map(Number);
  let ans = Array(N + 1).fill(0);
  for (let t = 1; t <= M; t++) {
    let [i, j, k] = input[t].split(" ").map(Number);
    ans.fill(k, i, j + 1);
  }
  ans.shift();
  return ans.join(" ");
}

console.log(solution());
