/* programie, który kopiując wejście na wyjście zastępuje każdy znak tabulacji przez \t oraz każdy znak \ 
przez dwa takie znaki, zostały przestawione wiersze */

#include <stdio.h>

int main() {

int c;

while ((c=getchar())!=EOF)
  if (c=='\t')
    printf("\\t");
else if (c=='\\')
   printf("\\\\");
else
   putchar(c);
return 0;
}
