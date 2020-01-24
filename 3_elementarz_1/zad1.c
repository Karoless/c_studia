/* Napisz program obliczający wartość każdego z poniższych wyrażeń: */

#include <stdio.h>

int main(){
	
	double a,b,c; 
	a = 5+3*8/2-3; 
	b = 2%2 + 2*2 - 2/2;
	c = 2*4*(5+9/2); 
	
	printf("a = %.4lf \nb= %.4lf, \nc = %.4lf \n", a, b, c);
	return 0; 
} 