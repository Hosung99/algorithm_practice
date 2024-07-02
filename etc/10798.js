const fs = require("fs");

const input = fs.readFileSync("/dev/stdin").toString().trim().split("\n");

let arr = Array.from({ length: 15 }, () => Array(15).fill(""));

function solution() {
  let ans = "";
  for (let i = 0; i < 5; i++) {
    for (let j = 0; j < input[i].length; j++) {
      arr[i][j] = input[i][j];
    }
  }
  for (let i = 0; i < 15; i++) {
    for (let j = 0; j < 15; j++) {
      if (arr[j][i] !== "") {
        ans += arr[j][i];
      }
    }
  }
  return ans;
}

console.log(solution());
