function getDayName(dateString) {
    let days = ['Sunday', 'Monday', 'Tuesday', 'Wednesday', 'Thursday', 'Friday', 'Saturday'];
    let arr = dateString.split('/');
    /* let mm = parseInt(arr[0], 10);
    let dd = parseInt(arr[1], 10);
    let yyyy = parseInt(arr[2], 10); */
    let m = arr[0];
    let d = arr[1];
    let y = arr[2];
    let myDate = new Date (y, m-1, d);
    // console.log(myDate.toString());
    let dayName = days[myDate.getUTCDay()];
    return dayName;
}

console.log(getDayName('10/11/2009'));
console.log(getDayName('11/10/2009'));