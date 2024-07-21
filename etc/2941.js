const fs = require("fs");

const input = fs.readFileSync("/dev/stdin").toString().trim().split("\n");

function solution() {
  let ans = 0;
  const word = input[0];
  const dict = ["c=", "c-", "d-", "lj", "nj", "s=", "z="];
  for (let i = 0; i < word.length; i++) {
    let w = word[i];
    if (i < word.length - 2) {
      let three_w = w + word[i + 1] + word[i + 2];
      if (three_w === "dz=") {
        i += 2;
        ans++;
      } else {
        let two_w = w + word[i + 1];
        let flag = true;
        dict.forEach((ele) => {
          if (ele === two_w) {
            i++;
            ans++;
            flag = false;
          }
        });
        if (flag) {
          ans++;
        }
      }
    } else if (i < word.length - 1) {
      let two_w = w + word[i + 1];
      let flag = true;
      dict.forEach((ele) => {
        if (ele === two_w) {
          i++;
          ans++;
          flag = false;
        }
      });
      if (flag) {
        ans++;
      }
    } else {
      ans++;
    }
  }
  return ans;
}

console.log(solution());
