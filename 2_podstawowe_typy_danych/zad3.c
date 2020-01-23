/*Napisz program, który pobiera Twój wiek w latach, a następnie przelicza go na sekundy.*/

#include <stdio.h>

int main() {
	
	int year, age, actualY, life_in_seconds = 0; 
	
	printf("Podaj twój wiek: ");
	scanf("%d", &age);
	printf("Podaj rok urodzenia: ");
	scanf("%d", &year); 
	
	actualY = age+year;
	
	for(year; year<=actualY; year++) {
		if(year%4==0 && year%100!=0 || year%400 == 0)
			life_in_seconds = life_in_seconds + (366*24*60*60);
		else life_in_seconds = life_in_seconds + (365*24*60*60);
	}
	
	printf("Żyjesz już %d sekund \n", life_in_seconds);
	
	return 0; 
}