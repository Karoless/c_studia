/* Użyj pętli while do przeliczania czasu w minutach na godziny i minuty. 
Utwórz stałą symboliczną dla liczby 60 przy pomocy #define lub const. */
#include <stdio.h>

#define CONS 60

int main(){
	
	int minuty, godziny;
	godziny = 0;
	
	printf("Podaj ile minut przeliczy na godziny: ");
	scanf("%d", &minuty);
	
	while(minuty - CONS>=0){
		minuty = minuty - CONS; 
		godziny++; 
	}
	
	printf("h:m - %d:%d \n", godziny, minuty); 
	
	return 0;
	
}