/*
  // This is my first Javascript code!
  console.log("Hello from Javascript");
  let x;
  x = 69;
  console.log('x = '+ x);
  let y = `Wassup 'mah' "nibba"? How's life?`;
  console.log(y);
*/

let arr = [5, 'AB', 7.5, true];
console.log(arr);

let x = undefined;
let y = null;
console.log(typeof x);
console.log(typeof y);

arr[5] = 420;
console.log(arr);
console.log(arr[4]);

myFunction();
function myFunction () {
    console.log('\nFunctions can be called both before and after their definition.\n');
}

let anuragb = {
    fullName: "Anurag Baundwal", // properties are separated by commas
    age: 20,
    // dateOfBirth: new Date(2001, 0, 28, 0, 0, 0, 0), // need to learn more about dates in javascript
    birthplace: {
        city: "kota",
        state: "rajasthan"
    }
}; console.log(anuragb);

class Animal {
    constructor (name = 'Dog', sound = 'barks') {
        this.name = name;
        this.sound = sound;
    }
    speak () {
        console.log(this.name + ' ' + this.sound);
    };
};

let dog = new Animal();
dog.name = 'Dog';
dog.sound = 'barks';
dog.speak();
let cat = new Animal ('Goofy', 'meows');
//cat.name = 'Goofy';
//cat.sound = 'meows';
cat.speak();

console.log ('i = ' + i);
class Car {
    constructor(brand) {
      this.carname = brand;
    }
}
var mycar = new Car("Ford");