const fs = require("fs");

const input = fs.readFileSync("/dev/stdin").toString().trim().split("\n");

function solution() {
  let N = parseInt(input[0]);
  let arr = new Array(N + 1).fill(0);
  arr[1] = 0;
  arr[2] = 1;
  arr[3] = 1;
  for (let i = 4; i <= N; i++) {
    arr[i] = arr[i - 1] + 1;
    if (i % 3 === 0) arr[i] = Math.min(arr[i], arr[i / 3] + 1);
	if (i % 2 === 0) arr[i] = Math.min(arr[i], arr[i / 2] + 1);
  }
  return (arr[N].toString());
}

console.log(solution());
