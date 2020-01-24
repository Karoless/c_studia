/* Zdefiniuj funkcję przeciwprostokatna obliczającą długość przeciwprostokątnej 
trójkąta prostokątnego z podanych długości przyprostokątnych. */

#include <stdio.h>
#include <math.h>

double przeciwprostokatna(double a, double b) {

  double d = pow(a,2) + pow(b,2);

  return pow(d, 0.5);
}

int main() {

  double result = 0;
  double a, b;
  printf("Podaj długośc przyprostokątnej a: ");
  scanf("%lf", &a);
  printf("Podaj długość przyprostokątnej b: ");
  scanf("%lf", &b);

  result = przeciwprostokatna(a,b);
  printf("długość przeciwprostokątnej %.2lf \n", result);
  
  return 0;

}
