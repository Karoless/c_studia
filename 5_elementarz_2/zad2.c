/* Zamiast komentarzy  w programie poniżej wpisz kod tak, aby powstał program, 
który sprawdza czy podana liczba całkowita jest pierwsza */

#include <stdio.h>

int main() {
  int a;
  int jest_pierwsza = 1;
  
  printf("Podaj liczbe calkowita: ");
  scanf("%d", &a);

  for(int i = 2; i<a; i++){
    if(a%i == 0){
      jest_pierwsza = 0;
      break;
	  }
    }

  printf("Podana liczba '%d' jest %s\n", a, jest_pierwsza ? "pierwsza" : "złożona");  
  
  return 0;
}
