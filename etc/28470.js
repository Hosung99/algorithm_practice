const fs = require("fs");

const input = fs.readFileSync("/dev/stdin").toString().trim().split("\n");

function solution() {
  let ans = 0;
  input[1] = input[1].split(" ");
  input[2] = input[2].split(" ");
  input[3].split(" ").forEach((el, idx) => {
    el = +el * 10;
    el = Math.floor(el);
    if (el >= 10) {
      ans += Math.floor((input[1][idx] * el) / 10) - input[2][idx];
    } else {
      ans += input[1][idx] - Math.floor((input[2][idx] * el) / 10);
    }
  });
  return ans;
}

console.log(solution());
