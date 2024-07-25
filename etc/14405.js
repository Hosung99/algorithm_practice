const fs = require("fs");

const input = fs.readFileSync("/dev/stdin").toString().trim();

function solution(input) {
  const regEx = /^(pi|ka|chu)+$/;
  if (regEx.test(input)) {
    return "YES";
  }
  return "NO";
}

console.log(solution(input));
