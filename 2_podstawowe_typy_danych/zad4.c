/*Napisz program, który pobiera Twoją datę urodzenia 
a następnie przelicza ile sekund przeżyłeś do momentu uruchomienia tego programu.*/

#include <stdio.h>
#include <time.h>

int change_days_to_seconds(int days){
	return days*24*60*60;
} 

int main() {
	
	int day, month, year; 
	int months[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
	int actualTime; 
	int days_since_start = 0; 
	
	printf("Podaj dzień urodzenia: ");
	scanf("%d", &day);
	printf("Podaj miesiąc urodzenia: ");
	scanf("%d", &month);
	printf("Podaj rok urodzenia: ");
	scanf("%d", &year);
	
	for(int start = 1970; start<= year; start++) {
		if(start%4==0 && start%100!=0 || start%400 == 0)
			months[1] = 29;
		else months[1] = 28;
		
		if(start==year) {
			for(int i = 0; i<month; i++)
				if(month-1 == i)
					days_since_start= days_since_start + day; 
				else
					days_since_start = days_since_start + months[i]; 
		}
		else {
			for(int i = 0; i<12; i++)
				days_since_start = days_since_start + months[i]; 
		}
	}
	
	printf("Od 01.01.1970 minęło %d dni\n", days_since_start);
	
	actualTime = time(NULL); 
	
	printf("Ilość sekund od daty twoje urodzenia do teraz %d \n", actualTime - change_days_to_seconds(days_since_start)); 
	
	return 0; 
	
}