function convertToRs(dollar) {
    if (typeof dollar === 'number') { // typeof gives a string
        return dollar * 75;
    } else {
        throw Error('Input type must be a number. Strings will not work.');
    }
}

console.log(convertToRs(4));
try { // if everything goes right
    let myRupees = convertToRs('five');
    console.log(myRupees);
} catch (error) {
    console.log(error);
}
