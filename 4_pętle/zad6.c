/* Napisz program, który wczyta ze stdin 6 liczb rzeczywistych do tablicy, 
a następnie wyszuka i wypisze największą i najmniejszą liczbę umieszczoną w tej tablicy. */

#include <stdio.h>

int main(){
	
	int tab[6]; 
	int max, min; 
	
	for(int i = 0; i<6; i++){
		printf("Podaj tab[%d]: ", i);
		scanf("%d", &tab[i]);
	} 
	
	max = tab[0];
	min = tab[0];
	
	for(int i = 1; i<6; i++){
		if(max<tab[i])
			max = tab[i];
		else if(min>tab[i])
			min = tab[i];
	} 
	
	printf("Wartość max = %d, wartość min = %d \n", max, min);
	
	return 0; 
}