/* Napisać funkcję rekurencyjną C(n,k) obliczającą współczynnik Newtona n po k, 
czyli liczbę podzbiorów k-elementowych zbioru n-elementowego.*/

#include <stdio.h>

int C(int n, int k) {
  if (k == 0 || k == n) {
    return 1;
  } else {
    return C(n - 1, k - 1) + C(n - 1, k);
  }
}
int main() {
  
  int n,k;
  printf("Podaj n: ");
  scanf("%d", &n);
  printf("Podaj k: ");
  scanf("%d", &k);

  int result;
  result = C(n, k);
  printf("Wynik %d \n", result);
}
