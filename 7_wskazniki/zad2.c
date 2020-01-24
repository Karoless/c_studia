#include <stdio.h>

int main() {

  int *wsk;
  int tab[2][2] = {{12, 14}, {16}};
  wsk = tab[0];
  printf("Wartość wsk: %d \n", *(wsk));
  printf("Wartość wsk+1: %d \n", *(wsk+1));
  printf("Wartość wsk+1: %d \n", *(wsk+3));

  int *wsk2;
  int tab2[2][2] = {{12}, {14, 16}};
  wsk2 = tab2[0];

  printf("Wartość wsk2: %d \n", *(wsk2));
  printf("Wartość wsk2+1: %d \n", *(wsk2+1));
  printf("Wartość wsk2+1: %d \n", *(wsk2+3));

  return 0;

}