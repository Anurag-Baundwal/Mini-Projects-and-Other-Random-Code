let start = new Date();
doSomething();
let end = new Date();

let elapsed = end.getTime() - start.getTime();
console.log(elapsed);

function doSomething () {
    for (let i=0; i<1000; i++) {

    }
};