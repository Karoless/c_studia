/*Napisz program, który wczyta liczbę rzeczywistą i wypisze jej pierwiastek kwadratowy. 
W wypadku podania liczby ujemnej, program powinien wypisać komunikat o błędzie oraz zakończyć działanie.*/

#include <stdio.h>
#include <math.h>

void pierwiastek(double a); 

int main() {
	
	double value; 
	
	printf("Podaj liczbę rzeczywistą: ");
	scanf("%lf", &value); 
	pierwiastek(value); 
	
	return 0; 
	
}

void pierwiastek(double a) {
	
	if(a>=0)
		printf("pierwiastek z liczby %.4lf = %.4lf \n", a, sqrt(a));
	else
		printf("Błąd - pierwiastek z liczby ujemnej \n");
}