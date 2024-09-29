//Set a random number
//ask the user to guess the number and check whether it is same as random number or not
//display score as (100 - no of guesses) & also number of guesses
let n = Math.floor(Math.random() * 100)
let chance = 0
let a = prompt("Enter a number")
console.log(n)
while (chance <= 100) {
    if (a == n) {
        break
    }
    else {
        if (a < n) {
            a = prompt(`Incorrect guess!! Try again. Hint: Actual number is greater than ${a}`)
            chance++
        }
        if (a > n) {
            a = prompt(`Incorrect guess!! Try again. Hint: Actual number is less than ${a}`)
            chance++
        }
    }
}
prompt("Correct Guess!! your score is: " + (100 - chance))
prompt("No of guesses = " + chance)