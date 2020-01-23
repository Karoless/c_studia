#include <stdio.h>
#include <math.h>

int main() {

  double start = 0, step = 0, end = 0;
  int result = 0;

  do {
    printf("Podaj start przedziału: ");
    scanf("%lf", &start);
	
    if(start>=0)
      result = 1;
    else
      printf("Liczba musi być większa lub równa 0, podaj jeszcze raz\n");
  }while(result == 0);

  
  do {
    result = 0;
    printf("Podaj koniec przedziału: ");
    scanf("%lf", &end);
	
    if(end>0 && end>start)
      result = 1;
    else
      printf("Liczba musi być większa od 0 i być większa od startu przedziału, podaj jeszcze raz\n");
  }while(result == 0);

  do {
    result = 0;
    printf("Podaj krok: ");
    scanf("%lf", &step);
	
    if(step<(end-start) && step>0)
      result = 1;
    else
      printf("Liczba musi być większa od 0 i mniejsza od end - start \n");
  }while(result == 0);

  printf("%.4lf    %.4lf\n", start, sqrt(start));
  double first_step = step;
  step = step + start;
  
  do{
  printf("%.4lf    %.4lf\n", step, sqrt(step));
  step = step+ first_step;
  }while(step<end);
  
  printf("%.4lf    %.4lf\n", end, sqrt(end));
  
  return 0; 

}