/* Napisz funkcję, która oblicza wartość silni z liczby naturalnej. */

#include <stdio.h>

int silnia(int a) {
  int silnia =1;
  if(a>1) 
    for(int i = 2; i<=a; i++)
      silnia= silnia * i;

  return silnia;
}

int main() {

  int sil;
  for(int i=0; i<10; i++) {
  sil = silnia(i);
  printf("%d \n", sil);
  }
  return 0;
}
