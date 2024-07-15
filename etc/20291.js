const fs = require("fs");

const input = fs.readFileSync("/dev/stdin").toString().trim().split("\n");

function solution() {
  let result = "";
  let N = +input[0];
  let obj = new Map();
  for (let i = 1; i <= N; i++) {
    let dotIdx = input[i].indexOf(".");
    let ext = input[i].slice(dotIdx + 1);
    if (obj.has(ext)) {
      obj.set(ext, obj.get(ext) + 1);
    } else {
      obj.set(ext, 1);
    }
  }
  let arr = [...obj];
  arr
    .sort((a, b) => {
      if (a[0] < b[0]) return -1;
      if (a[0] > b[0]) return 1;
      return 0;
    })
    .forEach((el) => {
      result += `${el[0]} ${el[1]}\n`;
    });
  return result;
}

console.log(solution());
