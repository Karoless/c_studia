/* Korzystając z twierdzenia Euklidesa, napisać program obliczający rekurencyjnie 
największy wspólny dzielnik z liczb podanych na wejściu.
*/

#include <stdio.h>

int nwd(int a, int b)
{
    if (b != 0) 
        return nwd(b, a % b);
    return a;
}

int main() {

  int a, b, result;
  printf("Podaj a: ");
  scanf("%d", &a);
  printf("Podaj b: ");
  scanf("%d", &b);

  result = nwd(a,b);
  printf("NWD(%d,%d) = %d \n", a , b, result);


  return 0;
}
