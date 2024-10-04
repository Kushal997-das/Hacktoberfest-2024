const MAX_CAPACITY = 50; // Maximum capacity of the knapsack

// Example items
const items = [
    { value: 60, weight: 10 },
    { value: 100, weight: 20 },
    { value: 120, weight: 30 }
];


function fractionalKNAP(MAX_CAPACITY, items) {
    let totalVal = 0 // Total value in the knapsack
    items.sort((a, b) => (b.value / b.weight) - (a.value / a.weight)) // sorting the items with value-to-weight ratio in desc order for ex: item1: 60/10 = 6, item2: 100/20 = 5 and item3: 120/30 = 4

    for (let item of items) {
        if (MAX_CAPACITY === 0) break; // Break the loop if MAX_CAPACITY is reached
        let weightToTake = Math.min(item.weight, MAX_CAPACITY)
        totalVal = totalVal + (weightToTake / item.weight) * item.value // Calculate the value of the fraction of the item taken and add it to the total value
        MAX_CAPACITY = MAX_CAPACITY - weightToTake // If item is taken we have to substract the weight of that item from MAX_CAPACITY
    }
    return totalVal
}


console.log("Maximum value in Knapsack:", fractionalKNAP(MAX_CAPACITY, items));
