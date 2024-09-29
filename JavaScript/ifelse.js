const age = '22'; //here age is defined as  a string
//if else loop
if (age==19) {
console.log('age is 19');    
}

else if (age !==22) { // checks whether the value is not equal to the given value
    console.log('age is 22');    
   }

else if (age===22) { // checks both data type and value
console.log('age is 22');
}

else if (age==22) { // checks only value i.e., age is defined as   string but matched as an integer
console.log('age is 22');    
}

else {
console.log('age is 67');
}

//switch case

switch (age) {
case 18:
    console.log('age is 18');    
    break;

    case 20:
    console.log('age is 20');    
    break;

    case 22:
    console.log('age is 22');    
    break;


    default:
    console.log('age is unknown');    
        break;
}
