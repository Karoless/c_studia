 /* Uzupełnij kod funkcji podnies_do_kwadratu oraz wczytaj_liczbe tak aby powstał działający program: */
 
#include <stdio.h>

void podnies_do_kwadratu(int *n) {
  *n = *(n) * *(n);
}

void wczytaj_liczbe(int *n) {
  printf("Wpisz liczbę naturalną: ");
  scanf("%d", n);

}

int main() {
   int liczba;
   wczytaj_liczbe(&liczba);
   podnies_do_kwadratu(&liczba);
   printf("Kwadrat wczytanej liczby to %d\n", liczba);
   return 0;
}
