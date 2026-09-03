/* Code by Anom Meshram
Class: SY CSE, Div: B, RollNo: 21 */

// JavaScript program to demonstrate String functionalities

let str = "Hello JavaScript";

console.log("Original String:", str);

// 1. Find length
console.log("Length:", str.length);

// 2. Convert to uppercase
console.log("Uppercase:", str.toUpperCase());

// 3. Convert to lowercase
console.log("Lowercase:", str.toLowerCase());

// 4. Find character at an index
console.log("Character at index 1:", str.charAt(1));

// 5. Find index of a character/string
console.log("Index of JavaScript:", str.indexOf("JavaScript"));

// 6. Check whether string contains a substring
console.log("Contains JavaScript:", str.includes("JavaScript"));

// 7. Extract part of a string
console.log("Substring:", str.substring(0, 5));

// 8. Extract using slice()
console.log("Slice:", str.slice(6, 16));

// 9. Replace a string
console.log(
    "After Replace:",
    str.replace("JavaScript", "World")
);

// 10. Remove spaces from beginning and end
let str2 = "   Hello World   ";
console.log("Trimmed String:", str2.trim());

// 11. Split string into an array
console.log("Split:", str.split(" "));

// 12. Concatenate strings
let first = "Hello";
let second = "World";
console.log("Concatenated:", first.concat(" ", second));

// 13. Check starting characters
console.log("Starts with Hello:", str.startsWith("Hello"));

// 14. Check ending characters
console.log("Ends with JavaScript:", str.endsWith("JavaScript"));

// 15. Reverse a string
let reversed = str.split("").reverse().join("");
console.log("Reversed String:", reversed);