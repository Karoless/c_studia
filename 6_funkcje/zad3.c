/* Napisz funkcję, która sprawdza czy podana liczba jest doskonała. 
Użyj tej funkcji do wypisania wszystkich liczb doskonałych mniejszych od 10 000. */

#include <stdio.h>
#include <math.h>

int isPerfect(int a) {

  int suma = 0; 
  for(int i=1; i<a; i++) 
    if(a%i == 0)
      suma = suma+i;
  if (suma == a)
    return 1;
  else
      return 0;
}

int main(){
	
  int w;
  
  for(int i=1; i<10000;i++) {
  w = isPerfect(i);
  
  if(w == 1)
    printf("%d jest liczbą doskonałą \n", i);
  }
  
  return 0; 
}
