/* Komputery odgrywają coraz większą rolę w nauczaniu. Napisz funkcję, 
która sprawdza umiejętność mnożenia liczb naturalnych w zakresie do 100 i 
w zależności od odpowiedzi na poszczególne pytania wyświetlany był losowo 
jeden z komunikatów: Bardzo dobrze!, Świetnie, Dobra robota!, 
Zła odpowiedź, Oj, niedobrze, Następnym razem może pójdzie Ci 
lepiej. W programie użyj instrukcji switch. */

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int getRandomNumber(int min, int max){

  srand(time(0));
  return min+rand()%max;
}

void getCorrectResponse(){
  srand(time(0));
  int option;
  option = 1 +rand()%3;
  switch (option) {
  case 1:
    printf("Bardzo dobrze!\n");
    break;
  case 2:
    printf("Świetnie!\n");
    break;
  case 3:
    printf("Dobra robota!\n");
    break;
  defualt:
    printf("cos poszlo nie tak\n");
  }
}

void getIncorrectResponse(){
  srand(time(0));
  int option;
  option = 1 +rand()%3;
  switch (option) {
  case 1:
    printf("Zła odpowiedź!\n");
    break;
  case 2:
    printf("Oj niedobrze...\n");
    break;
  case 3:
    printf("Następnym razem może pójdzie Ci lepiej\n");
    break;
  defualt:
    printf("cos poszlo nie tak\n");
  }
}

void gameOn() {
  int correct = 0;
  int incorrect = 0;
  int result;
  
  for(int i = 0; i<5;i++){
    int a = getRandomNumber(1,100);
    int b = getRandomNumber(5,75);
    printf("%d * %d = ", a, b);
    scanf("%d", &result);
    if(a*b == result) {
      correct++;
      getCorrectResponse();
    }
    else {
      incorrect++;
      getIncorrectResponse();
    }
  }
  printf("Liczba dobrych odpowiedz: %d, liczba złych odpowiedzi: %d \n", correct, incorrect);
}

int main() {

  gameOn();
 
  return 0; 
}

