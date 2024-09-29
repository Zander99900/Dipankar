//Program to print the marks of students in an exam using object & plain for loop
let marks = {
    dipankar: 99,
    kishan: 89,
    asutosh: 90,
    amit: 92
}
//Traditional method
for (let i = 0; i < Object.keys(marks).length; i++) {
    console.log("The mark of " + Object.keys(marks)[i] + " is: " + marks[Object.keys(marks)[i]])
}

//Modern method: using for-in loop
for (let key in marks) {
    console.log("The mark of " + key + " is: " + marks[key])
}
//Arrow function used in modern codes
const sum = (a, b) => {
    return (a + b)
}

console.log("Sum of 5 + 6 is: " + sum(5, 6))
