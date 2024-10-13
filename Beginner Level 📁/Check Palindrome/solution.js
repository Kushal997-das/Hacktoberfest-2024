let n = parseInt(prompt("Enter an integer: "));
let original = n;
let reversed = 0;

while (n != 0) {
  let remainder = n % 10;
  reversed = reversed * 10 + remainder;
  n = Math.floor(n / 10);
}

if (original === reversed) {
  console.log(original + " is a palindrome.");
} else {
  console.log(original + " is not a palindrome.");
}
