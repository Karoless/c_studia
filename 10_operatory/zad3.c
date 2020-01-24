/* Napisz program, który prosi użytkownika o podanie dwóch liczb całkowitych, 
a następnie sumuje wszystkie liczby całkowite pomiędzy podanymi liczbami (włącznie) 
i wypisuje wynik. */

#include <stdio.h>

int sumuj(int a, int b) {
	
	int result =0;
	
	for(a; a<=b; a++)
		result = result + a; 
	
	return result;
}

int main(){
	
	int a, b, result;
	do{
		printf("Podaj a: ");
		scanf("%d", &a);
		printf("Podaj b: ");
		scanf("%d", &b);
	
		if(a>b)
			printf("a musi być mniejsze od b, podaj liczby jeszcze raz \n"); 
		
	}while(a>b);
	
	result = sumuj(a,b);
	
	printf("Suma liczba całkowitych z przedziału <%d,%d> = %d \n", a, b, result); 
	
	return 0; 
}