/* . Napisać rekurencyjną implementację funkcji obliczającej nk (n do potęgi k). */

#include <stdio.h>
#include <math.h>

int potegowanie(int n, int k){
  if(k==1) return n;
  return n*pow(n,(k-1));

}

int main(){

  int n, k;
  
  printf("n^k - podaj n: ");
  scanf("%d", &n);
  printf("podaj k: ");
  scanf("%d", &k);
  
  int wynik = potegowanie(n,k);
  printf("%d \n", wynik);


  return 0;
}