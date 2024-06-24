const fs = require("fs");

const input = fs.readFileSync("/dev/stdin").toString().trim().split("\n");

function solution() {
  let [N, M] = input[0].split(" ").map(Number);
  let ans = Array(N + 1).fill(0);
  for (let i = 0; i <= N; i++) {
    ans[i] = i;
  }
  for (let i = 1; i <= M; i++) {
    let [a, b] = input[i].split(" ").map(Number);
    [ans[a], ans[b]] = [ans[b], ans[a]];
  }
  ans.shift();
  return ans.join(" ");
}

console.log(solution());
