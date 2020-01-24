/*Oblicz wartość π (pi) z nieskończonej sumy */

#include <stdio.h>

int main() {

  double a=4;
  int step = 2;
  int lenght;
  double devider = 3;
  
  printf("Podaj długość szeregu: ");
  scanf("%d", &lenght);

  for(double i=1; i<=lenght; i++){
    if(step%2 != 0){
      a = a+4/devider;
    }
    else {
      a = a-4/devider;
    }
    step++;
    devider = devider + 2;
  }
  
  printf("suma po %d %f",lenght, a);
  return 0;
  
}