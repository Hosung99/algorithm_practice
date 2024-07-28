const fs = require("fs");

const filePath = process.platform === "linux" ? "/dev/stdin" : "../test.txt";

const input = fs.readFileSync(filePath).toString().trim().split("\n");

function solution() {
  let t = +input[0];
  let ans = "";
  while (t--) {
    ans += "yes\n";
  }
  return ans;
}

console.log(solution());
