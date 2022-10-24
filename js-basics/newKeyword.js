function Dog (age) {
    this.age = age;
  }
  
  const doggie = new Dog(12);
  
  console.log(doggie);
  console.log(doggie.__proto__ === Dog.prototype) // true

  /*
  The new keyword is used in javascript to create a object from a constructor function. The new keyword has to be placed before the constructor function call and will do the following things:

    1. Creates a new object
    2. Sets the prototype of this object to the constructor function's prototype property
    3. Binds the this keyword to the newly created object and executes the constructor function
    4. Returns the newly created object
*/