const fs = require("fs");

const input = fs.readFileSync("/dev/stdin").toString().trim().split("\n");

function solution() {
  let N = parseInt(input[0]);
  let answer = 0;
  for (let i = 1; i <= N; i++) {
    let str = input[i];
    let used = [];
    let flag = true;
    for (let j = 0; j < str.length; j++) {
      let c = str[j];
      if (!used.includes(c)) {
        used.push(c);
      } else if (j !== 0 && c !== str[j - 1]) {
        flag = false;
        break;
      }
    }
    if (flag) {
      answer++;
    }
  }
  return answer;
}

console.log(solution());
