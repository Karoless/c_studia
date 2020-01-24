/* suma kwadratow liczb całkowitych z podanego zakresu <a;b> */

#include <stdio.h>
#include <math.h>

int poteguj(int a, int b) {
	
	int result =0;
	
	for(a; a<=b; a++)
		result = result + pow(a,2); 
	
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
	
	result = poteguj(a,b);
	
	printf("Suma potęg liczb całkowitych z przedziału <%d,%d> = %d \n", a, b, result); 
	
	return 0; 
}