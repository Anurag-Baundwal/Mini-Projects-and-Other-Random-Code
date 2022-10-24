let d = new Date(); // Current date and time & time zone of the browser

//let d = new Date(1000); // 1 argument means no of milliseconds since 1st Jan 1970
console.log(d.toUTCString());
/* console.log(d.toString());
console.log(d.getUTCDay()); // returns a number b/w 0 and 6 (both inclusive) ... 0 would indicate sunday
console.log(d.getDay()); // same as line 6
console.log(d.getUTCDate());
console.log(d.getDate()); */

d.setUTCMinutes(69);
console.log(d.getUTCMinutes());
console.log(d.toUTCString());
console.log(d.toISOString());