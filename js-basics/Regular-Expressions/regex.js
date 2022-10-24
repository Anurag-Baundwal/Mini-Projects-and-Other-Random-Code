let str = "Black is just another shade of white.";
let reg = /Shade/ig;
// The reg variable is a regular expression
// The stuff after the second forward slash / is the flags
// The order of the flags does not matter
// So, /Shade/ig and /Shade/gi are equivalent
let found = reg.test(str); // Boolean value - true
console.log(found);

/* let x = '8';
let y = x.toString(2);
console.log (y);

let a = 16;
let b = a.toString(2);
console.log(b); */