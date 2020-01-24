/* Napisz funkcję, która po wczytaniu liczby całkowitej wypisze jej cyfry zaczynając od ostatniej i kończąc na pierwszej.
 Na przykład po wczytaniu liczby '1410' funkcja powinna wypisać '0141'. */
#include <stdio.h>
#include <math.h>

int checkLenght(int number) {
  int lenght = 0;
  
  do {
    number = (number-(number%10))/10;
    lenght++;
  }while(number>=1);

  return lenght; 
}

void reverseNumber(int number) {
  
  int result;
  int lenght;
  
  lenght = checkLenght(number);
  for(int i=1;i<=lenght; i++) {
    result = number%10;
    printf("%d", result);
    number = (number-(result))/10;
  }
}

int main() {

  int number;
  
  printf("Podaj libczę jaką mam wypisać od tyłu: ");
  scanf("%d", &number);

  reverseNumber(number);
  
  return 0;
}
