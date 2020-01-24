/* Napisz program, wypisujący w postaci tabelki pierwiastki z pierwszych 20 liczb naturalnych. */

#include <stdio.h>
#include <math.h>

int main() {

  double tab[20];
  
  for(int i = 0; i<20; i++)
    tab[i] = pow(i,0.5);

  for(int i= 0; i<20; i++)
    printf("tab[%d] = %.4lf\n", i, tab[i]);

  return 0;
}
