# Guess a Number: The Game

### Algorithm
```
include needed libraries

int main(){
  char userName[20]
  printf(greeting and ask for name)
  get userName
  printf(cool name, lets game)

  int keepGoing = 1;
  int score = 1;

  temp answer of 50 for testing
  srand(time(null));
  answer = (answer % 100) + 1;

  while (keepGoing){
    printf(attempt %d what number am i thinking)
    get userNumber

    if (userNumber > answer)
      printf(too high);
    else if (userNumber < answer)
      print(too low)
    else
      printf(you win'd)
      keepGoing = 0;

  return(0)
```
