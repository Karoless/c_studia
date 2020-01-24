/* Napisz program, który wczyta ze stdin 6 liczb rzeczywistych do tablicy, 
a następnie wypisze liczbę liczb dodatnich w niej zawartych.*/

#include <stdio.h>

int main(){
	
	int tab[6]; 
	int value = 0;
	
	for(int i = 0; i<6; i++){
		printf("Podaj tab[%d]: ", i);
		scanf("%d", &tab[i]);
	} 
	for(int i = 0; i<6; i++){
		if(tab[i]>0)
			value++; 
	} 
	
	printf("Liczba dodatnich wyrazow w tab to %d \n", value);
	
	return 0; 
}