/*Poniższy – zawierający wiele błędów – program dla podanej z klawiatury liczby M 
ma obliczyć najmniejszą liczbę n, taką że

1 + 2 + 3 +...+ n >= M

Popraw wszystkie błędy w tym programie tak, aby poprawiony program prawidłowo obliczał liczbę n. */

#include <stdio.h>

int main() {
	
  int m;
  int suma = 0;
  int i = 1;
  int n;
  
  printf("Podaj liczbe M: ");
  scanf("%d", &m);
  while (suma < m) {
     suma=suma+i;
     i=i+1;
  }
  n = i-1;
  printf("Szukane n to: %d \n", n);
  return 0;
}
