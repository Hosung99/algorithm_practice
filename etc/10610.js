const fs = require("fs");

const input = fs.readFileSync("/dev/stdin").toString().trim().split("\n");

function solution() {
  let result = input[0].split("").sort().reverse().join("");
  let sum = 0;
  for (let i = 0; i < result.length; i++) {
    sum += parseInt(result[i]);
  }
  if (sum % 3 !== 0 || !result.includes("0")) {
    return -1;
  }
  return result;
}

console.log(solution());
