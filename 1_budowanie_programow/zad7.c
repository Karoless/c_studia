/*Napisz program, który wczyta liczbę rzeczywistą i wypisze jej odwrotność oraz jej pierwiastek kwadratowy. 
Program nie powinien obliczać odwrotności liczby 0 oraz pierwiastka z liczby ujemnej. W takiej sytuacji zamiast 
obliczeń program powinien wypisać odpowiedni komunikat.*/

#include <stdio.h>
#include <math.h>

void pierwiastek(double a); 
void odwrotnosc(double a); 

int main() {
	
	double value; 
	
	printf("Podaj liczbę rzeczywistą: ");
	scanf("%lf", &value); 
	pierwiastek(value); 
	odwrotnosc(value); 
	
	return 0; 
	
}

void pierwiastek(double a) {
	
	if(a>=0)
		printf("pierwiastek z liczby %.4lf = %.4lf \n", a, sqrt(a));
	else
		printf("Błąd - pierwiastek z liczby ujemnej \n");
}

void odwrotnosc(double a) {
	
	if(a!=0)
		printf("odwrotność z liczby %.4lf to %.4lf \n", a, 1.0/a);
	else
		printf("Błąd - dzielenie przez 0 \n");
}