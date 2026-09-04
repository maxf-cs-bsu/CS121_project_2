# Guess a Number: The Game

### 1. Get the user's name.
```
 Prompt the user to enter their name with a printf
   Get input from the user for their name
 Display the user's name in a custom message saying to play a game
### 2. Get a number
 As a temp, pick 50 as a value for the randomNumber. This way, you can test the high/low code later
```
### 3. User guesses
```
 Start a While Loop with keepGoing = True
   Ask the user for a number value as guessNumber
     If guess > randomNumber OR if guess < randomNumber
     Add +1 to score.
   Keep track of score and display it each turn
   If guess == randomNumber, printf("Great job  \n") // or something along those lines
     Send a printf depending on their score (Below 7 is great/below 10 is ok/above 10 is a skill issue) //Special first try message?
     Set keepGoing = False
```
### 4. Get a number: 2
```
 Once everything else is set, write code to get a random int for the randomNumber value
 Set limits as 1 to 100
```
