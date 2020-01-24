/* Napisz program, który wyliczy sumę liczb naturalnych od 1 do liczby n 
podanej przez użytkownika. Kiedy użytkownik poda liczbę mniejszą niż 1, 
to program powinien wypisać stosowny komunikat o błędzie */

#include <stdio.h>

int main() {
	
	int n; 
	
	do{ 
		printf("Podaj n: ");
		scanf("%d", &n); 
		
		if(n<1)
			printf("n musi być większe od 1, podaj jeszcze raz! \n");
		
	}while(n<1); 
	
	int suma = 0; 
	for(int i = 1; i<=n; i++)
		suma = suma + i; 
	
	printf("Suma liczb z przedziału od 1 do %d = %d \n",n, suma);

	return 0; 
}

 