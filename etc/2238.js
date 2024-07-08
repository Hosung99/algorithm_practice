const fs = require("fs");

const input = fs.readFileSync("/dev/stdin").toString().trim().split("\n");

function solution() {
  input[0] = input[0].split(" ").map(Number);
  let [U, N] = [input[0][0], input[0][1]];
  let m = new Map();
  for (let i = 1; i <= N; i++) {
    input[i] = input[i].split(" ");
    let num = +input[i][1];
    if (m.has(num)) {
      let name = m.get(num);
      m.set(num, { cnt: name.cnt + 1, name: name.name });
    } else {
      m.set(num, { cnt: 1, name: input[i][0] });
    }
  }
  let arr = Array.from(m).sort((a, b) => {
    if (a[1].cnt === b[1].cnt) return a[0] - b[0];
    return a[1].cnt - b[1].cnt;
  });
  let ans = "";
  ans += arr[0][1].name + " " + arr[0][0];
  return ans;
}

console.log(solution());
