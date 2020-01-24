/* program zliczający znaki odstępu, tabulacji i nowego wiersza tekstu wczytanego z stdin. */

#include <stdio.h>

int main() {
  
   int nb = 0;  /* liczba znaków odstępu */
   int  nt = 0;  /* liczba znaków tabulacji */
   int nl = 0;  /* liczba znaków nowego wiersza */
   char c; 
   
   while ((c=getchar()) != EOF) {
     if(c == ' ')
       nb++;
     else if(c == '\t')
       nt++;
     else if(c == '\n')
       nl++;
   }
   
   printf("\nliczba znaków odstępu = %d, \ntabulacji = %d \nnowego wiersza = %d\n", nb, nt, nl);
   
   return 0;
}