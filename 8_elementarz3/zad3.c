/* Trójkąt pitagorejski to trójkąt prostokątny, w którym długość każdego boku jest liczbą całkowitą. 
Napisz program wypisujący wszystkie trójkąty pitagorejskie, których obwód nie przekracza 1000. */

#include <stdio.h>
#include <math.h>

int main() {

  for(int a = 1; a<=1000; a++)
    for(int b = 1; b<=1000; b++)
      for(int c = 1; c<=1000; c++){
	int left = pow(a,2) + pow(b,2);
	int right = pow(c,2);
	if(((a+b)> c) && (left == right) && (a+b+c)<1000)
	  {
		    printf("a= %d, b = %d, c = %d ", a, b, c);
		    printf("a^2 + b^2 = c^2 -> %d = %d\n", left, right);
	  }
	if(a+b+c>1000)
	  break;
       }
		  
  return 0;
}
