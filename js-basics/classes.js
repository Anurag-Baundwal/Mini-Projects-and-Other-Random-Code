/* class Polygon {
    constructor (intArr) {
        this.sides = intArr;
    }

    perimeter () {
        let per = 0;
        let i;
        for (i=0; i<this.sides.length; i++) {
            per += this.sides[i];
        }
        return per;
    }
} */

class Rectangle {
    constructor(w, h) {
        this.w = w;
        this.h = h;
    }
}

Rectangle.prototype.area = function () {
    return (this.w * this.h);
}

class Square extends Rectangle {
    constructor (side) {
        super(side, side);
    }
}