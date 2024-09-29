let a =20;
// a++;
// ++a;
// console.log(a);
for (a; a<30 ; a++) {
    console.log(a);
}
console.log('here for loop ends');

let b = 10;
 while (b<20) {
    console.log(b+1);
    b++; 
 }  
 console.log('here while loop ends');

 let c =0;
 do{
    console.log(c+1);
    c++;
 } while(c<1); //its gonna print one value at any cost

 console.log('here do while loop ends');

 let p =0;
 do{
     if (p===5) {
         p+=1;
         continue; //this will skip ther next iteration i.e., 6.
     }
    console.log(p+1);
    p++;
 } while(p<10);

 let obj = {
     name: 'zander',
     age: 22,
     type: 'piro gamer' 
 }

 for (let key in obj){
     console.log(`the ${key} of object is ${obj[key]}`)
 }

 let add = function sum(x , y) {
     z=x+y;
    return z;
 }
// let x = 5;
// let y = 7;

console.log(add(5,4));