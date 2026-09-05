#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
  char userName[20];
  printf("Hello! What's your name?: ");
  scanf("%s", userName);
  printf("Nice to meet you %s! Lets play a game! I'm thinking of a number between 1 and 100.  \n", userName);

  int keepGoing = 1;
  int score = 1;
  int userNumber = 1;

 // int answer = 50; //non-random number for testing
  srand(time(NULL));
  int answer = rand();
  answer = (answer % 100) + 1;
	  
  while (keepGoing){
    printf("\nAttempt %d: What number am I thinking of?: ", score);
    scanf("%d", &userNumber);

    if (userNumber > answer){
      printf("Too High!");
      score += 1;
    } else if (userNumber < answer){
      printf("Too Low.");
      score += 1;
    } else {
      printf("It was %d!  \n", answer);
      keepGoing = 0;
    } // end ifs
  } // end while

  if (score == 1){
    printf("First try?!?! WOAH!");
  } else if (score <= 7){
    printf("%d Attempts? Great job!", score);
  } else if (score <= 10){
    printf("%d Attempts? Not bad.", score);
  } else {
    printf("%d Attempts? Tsk tsk. Poor preformance indeed...", score);
  } // end of result ifs

  return(0);
} // end main

