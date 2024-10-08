let result = document.querySelector("#result");

let sub_1 = document.querySelector(".sub-1");
let sub_2 = document.querySelector(".sub-2");
let sub_3 = document.querySelector(".sub-3");
let sub_4 = document.querySelector(".sub-4");
let sub_5 = document.querySelector(".sub-5");
let sub_6 = document.querySelector(".sub-6");

function calculate() {
  // Total
  let totalNumbers =
    parseFloat(sub_1.value) +
    parseFloat(sub_2.value) +
    parseFloat(sub_3.value) +
    parseFloat(sub_4.value) +
    parseFloat(sub_5.value) +
    parseFloat(sub_6.value);

  // AVG
  let avg = ((totalNumbers / 600) * 100).toFixed(2);

  // Grades
  let grades = "";
  if (avg >= 80 && avg <= 100) {
    grades = "A";
  } else if (avg >= 60 && avg <= 79) {
    grades = "B";
  } else if (avg >= 50 && avg <= 59) {
    grades = "C";
  } else if (avg >= 0 && avg <= 49) {
    grades = "F";
  }

  // Status
  status = "";
  if (avg >= 80 && avg <= 100) {
    status = "Excellent";
  } else if (avg >= 60 && avg <= 79) {
    status = "Very Good";
  } else if (avg >= 50 && avg <= 59) {
    status = "Good";
  } else if (avg >= 0 && avg <= 49) {
    status = "Failed";
  }

  // Result
  result.innerHTML = `Out of 600, You're Total Marks are: ${totalNumbers} <br> Your Average Marks are: ${avg}. <br> You got ${grades} Grade with ${status} Remarks.`;
}
