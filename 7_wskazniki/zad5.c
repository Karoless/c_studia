/* Napisz program, używajacy wskaźników do nadania wartości 128 każdemu elementowi tablicy int tab[512]. 
Przetestuj ją w prostym programie.*/

#include <stdio.h>

int main() {

  int tab[512];
  int *wsk = tab; 

  for(int i = 0; i<512; i++){
    *wsk= 128;
    wsk++;
  }
  *wsk = tab[0];
  printf("tab[100] = %d, tab[200] = %d \n", tab[100], tab[200]);

  return 0;

}
