function solution() {
  let ans = "";
  let arr = new Array(10001).fill(0);
  for (let i = 1; i <= 10000; i++) {
    let sum = i;
    let temp = i;
    while (temp) {
      sum += temp % 10;
      temp = Math.floor(temp / 10);
    }
    if (sum <= 10000) {
      arr[sum] = 1;
    }
  }
  arr.forEach((v, i) => {
    if (!v && i > 0 && i < 10001) {
      ans += i + "\n";
    }
  });
  return ans;
}

console.log(solution());
