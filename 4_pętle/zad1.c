/* Napisz program, który wypisuje kolejne potęgi liczby 2 nie przekraczające 2010. */

#include <stdio.h>
#include <math.h>

int main() {
	
	int i = 0;
	while(pow(2,i)<2010){
		printf("2^%d = %.0f \n", i, pow(2,i));
		i++;
	}
	
	return 0; 
} 