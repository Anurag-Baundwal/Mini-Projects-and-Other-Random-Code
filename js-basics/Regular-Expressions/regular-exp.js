let str = "Anurag is coding. Anurag likes Javascript. Anurag doesn't like regex yet, but he's trying";
let regExp = /Anurag/g;

/* let matchesFound = str.match(regExp);
console.log(matchesFound);
console.log(typeof matchesFound);

let results = regExp.exec(str);
console.log(results);
console.log(typeof results); */

let anotherRegExp = /^Ag$/g;
console.log(str.match(anotherRegExp));
console.log(anotherRegExp.test(str));