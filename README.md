# Guess a Number: The Game

### 1. Get the user's name.
* Prompt the user to enter their name with a printf
* Get input from the user for their name
* Display the user's name in a custom message saying to play a game
### 2. Get a number
* As a temp, pick 50 as a value for the number. This way, you can test the high/low code later
* Switch out the 50 with code to have a random number from 1 to 100 picked for the value
### 3. User guesses
* Start a While Loop with keepGoing = True
* Ask the user for a number value
* If guess is too high/low, ask user to input a new number
* Add +1 to score.
* Keep track of score and display it each turn
* If the user guesses the number correctly, display what the correct number was
* Send a printf depending on their score (Below 7 is great/below 10 is ok/above 10 is a skill issue) //Special first try message?
* Set keepGoing to False
