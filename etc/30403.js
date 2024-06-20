const fs = require("fs");
const input = fs.readFileSync("/dev/stdin").toString().trim().split("\n");

function solution() {
  let N = parseInt(input[0]);
  let b = input[1];

  const smallRainbow = ["r", "o", "y", "g", "b", "i", "v"];
  const bigRainbow = ["R", "O", "Y", "G", "B", "I", "V"];

  const smallCount = {};
  const bigCount = {};

  for (let char of smallRainbow) {
    smallCount[char] = 0;
  }

  for (let char of bigRainbow) {
    bigCount[char] = 0;
  }

  for (let char of b) {
    if (smallCount.hasOwnProperty(char)) {
      smallCount[char]++;
    }
    if (bigCount.hasOwnProperty(char)) {
      bigCount[char]++;
    }
  }

  const canMakeSmall = smallRainbow.every((char) => smallCount[char] > 0);
  const canMakeBig = bigRainbow.every((char) => bigCount[char] > 0);

  if (canMakeSmall && canMakeBig) {
    return "YeS";
  } else if (canMakeSmall) {
    return "yes";
  } else if (canMakeBig) {
    return "YES";
  } else {
    return "NO!";
  }
}

console.log(solution());
