/*Napisz program, który prosi użytkownika o wprowadzenie trzech liczb z klawiatury, 
a następnie wypisze sumę, iloczyn, najmniejszą i największą z wprowadzonych liczb.*/

#include <stdio.h>

int main(){
	
	int a, b, c;
	int suma, iloczyn, max, min; 
	
	printf("Podaj trzy liczby całkowite a, b, c: ");
	scanf("%d %d %d", &a, &b, &c);
	
	suma = a+b+c;
	iloczyn = a*b*c; 
	max = a; 
	min = a; 
	
	if(b>c && b>max)
		max = b;
	else if(c>max)
		max = c; 
	
	if(b<c && b<min)
		min = b;
	else if(c<min)
		min = c;
	
	printf("Suma = %d \nIloczyn = %d \nMin = %d \nMax = %d \n", suma, iloczyn, min, max);
	
	return 0; 
} 