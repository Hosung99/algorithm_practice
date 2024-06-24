const fs = require("fs");

const input = fs.readFileSync("/dev/stdin").toString().trim().split("\n");

function solution() {
  let arr = [];
  for (let i = 1; i <= 30; i++) {
    arr.push(i);
  }
  input.forEach((i) => {
    if (arr.indexOf(parseInt(i)) !== -1) {
      arr.splice(arr.indexOf(parseInt(i)), 1);
    }
  });
  arr.sort(function (a, b) {
    if (a >= b) return 1;
    else return -1;
  });
  return arr.join("\n");
}

console.log(solution());
