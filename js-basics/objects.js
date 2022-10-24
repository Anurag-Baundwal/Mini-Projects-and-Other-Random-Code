let a = 5;
let b = 6;

// objects have properties and methods
// no of members = no of properties + no of methods
let obj = {
    length: a, // properties are separated by commas
    width: b,
    perimeter: 2*(a+b),
    area: a*b
};

console.log(typeof obj); // typeof gives a string

let i;
let arr = [];
let len = arr.length;
console.log (len);