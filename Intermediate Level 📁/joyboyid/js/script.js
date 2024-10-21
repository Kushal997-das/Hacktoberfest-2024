document.addEventListener("DOMContentLoaded", function () {
  fetch("/Intermediate Level 📁/data.json")
    .then((response) => response.json())
    .then((data) => {
      const dataDisplay = document.getElementById("dataDisplay");

      // Create HTML elements to display the JSON data
      const nameElement = document.createElement("p");
      nameElement.textContent = "Name: " + data.name;

      const countryElement = document.createElement("p");
      countryElement.textContent = "Country: " + data.country;

      const ghElement = document.createElement("p");
      ghElement.textContent = "Gh Username:" + data.usergithub;

      // Append the elements to the "dataDisplay" div
      dataDisplay.appendChild(nameElement);
      dataDisplay.appendChild(countryElement);
      dataDisplay.appendChild(ghElement);
    })
    .catch((error) => console.error("Error fetching JSON data:", error));
});
