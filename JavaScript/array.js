let marks = [20, 45, 60, 84];
console.log(marks);
const loc = ['ctc', 'bbsr', 'jsr' , 'kanpur'];
console.log(loc); 
let arelement = loc[0];
console.log('element: ', arelement);
let val = marks.indexOf(60); // indicates the locarions of the given element in the array
console.log(val);
marks.push(99); //adds the value in the end of the array
console.log(marks);
marks.unshift(99); //adds the value at the beginning of the array
console.log(marks);
marks.reverse();
console.log(marks);
marks.splice(1,2); // the 2nd value (2) indicates the number of elements removed from the original array
console.log(marks);
let myobj = {
    'name' : 'dipankar',
     clan : 'Rxarmy'
}
console.log(myobj);
console.log(myobj.clan); //ways of calling a  variable in object
console.log(myobj['name']);




