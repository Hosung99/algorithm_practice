const fs = require("fs");

const input = fs.readFileSync("/dev/stdin").toString().trim().split("");

const obj = {
  M: "MatKor",
  W: "WiCys",
  C: "CyKor",
  A: "AlKor",
  $: "$clear",
};

function solution() {
  const N = input[0];
  for (ob in obj) {
    if (ob === N) {
      return obj[ob];
    }
  }
}

console.log(solution());
