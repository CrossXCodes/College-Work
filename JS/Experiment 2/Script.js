/* Code by Anom Meshram
Class: SY CSE, Div: B, RollNo: 21 */

// JavaScript program to demonstrate Array functionalities

let arr = [10, 25, 5, 40, 15];

console.log("Original Array:", arr);

// 1. Add element at the end
arr.push(50);
console.log("After push(50):", arr);

// 2. Remove element from the end
arr.pop();
console.log("After pop():", arr);

// 3. Add element at the beginning
arr.unshift(5);
console.log("After unshift(5):", arr);

// 4. Remove element from the beginning
arr.shift();
console.log("After shift():", arr);

// 5. Find length of array
console.log("Length of array:", arr.length);

// 6. Access an element
console.log("First element:", arr[0]);

// 7. Search for an element
let search = 25;
console.log(
    search + " is present:",
    arr.includes(search)
);

// 8. Find index of an element
console.log("Index of 40:", arr.indexOf(40));

// 9. Sort array
let sortedArray = [...arr].sort((a, b) => a - b);
console.log("Sorted Array:", sortedArray);

// 10. Reverse array
let reversedArray = [...arr].reverse();
console.log("Reversed Array:", reversedArray);

// 11. Find largest element
let largest = Math.max(...arr);
console.log("Largest Element:", largest);

// 12. Find smallest element
let smallest = Math.min(...arr);
console.log("Smallest Element:", smallest);

// 13. Sum of array elements
let sum = arr.reduce((total, value) => total + value, 0);
console.log("Sum:", sum);

// 14. Average of array elements
let average = sum / arr.length;
console.log("Average:", average);

// 15. Display each element using forEach()
console.log("Array Elements:");
arr.forEach(function(value, index) {
    console.log("Index " + index + ":", value);
});

// 16. Create a new array using map()
let doubled = arr.map(function(value) {
    return value * 2;
});
console.log("Doubled Array:", doubled);

// 17. Filter elements
let greaterThan20 = arr.filter(function(value) {
    return value > 20;
});
console.log("Elements greater than 20:", greaterThan20);

// 18. Join array elements
console.log("Array as String:", arr.join(", "));