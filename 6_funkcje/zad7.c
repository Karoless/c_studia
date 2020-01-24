/* Napisz program, do gry zgadnij liczbę. */

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int getRandomNumber(int min, int max){

  srand(time(0));
  return min+rand()%max;
}

int gameOn(){
  int number = getRandomNumber(1,100);
  int result = 0;
  int attemps = 0;

  while(result == 0){
    int choice;
    printf("Podaj liczbę z zakresu 1-100: ");
    scanf("%d", &choice);
    if(choice> number)
      printf("Podałeś za dużą liczbe! \n");
    if(choice<number)
      printf("Podałeś za małą liczbe! \n");
    else if(choice == number) {
      printf("Brawo zgadłeś! \n");
      result = 1;
  }
    attemps++;
  }
  printf("Liczba prób: %d \n", attemps);
}

int main() {

  gameOn();
  
  return 0;
}
