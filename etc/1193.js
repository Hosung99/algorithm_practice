const fs = require("fs");

const input = fs.readFileSync('/dev/stdin').toString().trim().split(" ");
function solution() {
  let N = parseInt(input[0]);
  let flag = true;

  let i = 1;
  let j = 1;
  while (N > 1) {
    if (flag) {
      j--;
      if (j === 0) {
        j = 1;
        i++;
        flag = false;
      } else {
        i++;
      }
    } else {
      i--;
      if (i === 0) {
        i = 1;
        j++;
        flag = true;
      } else {
        j++;
      }
    }
	N--;
  }

  console.log(`${j}/${i}`);
}

solution();
