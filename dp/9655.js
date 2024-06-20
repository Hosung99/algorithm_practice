const fs = require("fs");

const input = fs.readFileSync("/dev/stdin").toString().trim().split("\n");

function solution() {
  let N = parseInt(input[0]);
  let flag = true;
  while (N >= 0) {
    if (N >= 3) {
      N -= 3;
      flag = !flag;
    } else {
      N -= 1;
      flag = !flag;
    }
  }
  return flag ? "SK" : "CY";
}

console.log(solution());
