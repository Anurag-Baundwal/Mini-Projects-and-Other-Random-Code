setInterval(displayClock, 500);
function displayClock() {
    let myDate = new Date();
    let yrs = myDate.getFullYear();
    let month = myDate.getMonth();
    let day = myDate.getDay();
    let date = myDate.getDate();
    let hrs = myDate.getHours();
    let min = myDate.getMinutes(); 
    let sec = myDate.getSeconds();

    let dayArray = ['Sunday', 'Monday', 'Tuesday', 'Wednesday', 'Thursday', 'Friday', 'Saturday'];

    let monthArray = ['January', 'February', 'March', 'April', 'May', 'June', 'July', 'August', 'September', 'October', 'November', 'December'];

    if (hrs < 10) {
        hrs = '0' + hrs;
    }

    if (min < 10) {
        min = '0' + min;
    }

    if (sec < 10 ) {
        sec = '0' + sec;
    }

    document.getElementById("clock").innerHTML = `${dayArray[day]}, ${date} ${monthArray[month]} ${yrs} || ${hrs} : ${min} : ${sec}`;
}