const fs = require("fs");

const input = fs.readFileSync("/dev/stdin").toString().trim().split(" ");

function solution() {
  let [a, b] = [input[0], input[1]];
  a = a.toString().split("").reverse().join("");
  b = b.toString().split("").reverse().join("");
  if (parseInt(a) > parseInt(b)) {
    return a;
  } else {
    return b;
  }
}

console.log(solution());
