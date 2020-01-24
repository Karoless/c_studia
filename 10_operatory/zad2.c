/* Napisz program, który prosi o podanie liczby dni, a następnie zamienia je na tygodnie i dni. */

#include <stdio.h>

#define CONS 7

int main(){
	
	int days, days_after_change, weeks;
	weeks = 0;
	
	printf("Podaj ile dni przeliczyć na tygodnie: ");
	scanf("%d", &days);
	
	days_after_change = days;
	
	while(days_after_change - CONS>=0){
		days_after_change = days_after_change - CONS; 
		weeks++; 
	}
	
	printf("%d dni to %d tygodnie i %d dni\n", days, weeks, days_after_change); 
	
	return 0;
	
}
