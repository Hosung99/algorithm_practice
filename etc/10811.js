const fs = require("fs");

const input = fs.readFileSync("/dev/stdin").toString().trim().split("\n");

function solution() {
  let [N, M] = input[0].split(" ").map(Number);
  let arr = [];
  for (let i = 1; i <= N; i++) {
    arr.push(i);
  }
  for (let i = 1; i <= M; i++) {
    let [a, b] = input[i].split(" ").map(Number);
    let temp = arr.slice(a - 1, b).reverse();
    arr.splice(a - 1, b - a + 1, ...temp);
  }
  return arr.join(" ");
}

console.log(solution());
