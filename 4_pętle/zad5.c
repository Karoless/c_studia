/* Napisz program, który wczyta ze stdin 6 liczb całkowitych do tablicy, 
a następnie wypisze zawartość tej tablicy od początku i od końca. */

#include <stdio.h>

int main(){
	
	int tab[6]; 
	
	for(int i = 0; i<6; i++){
		printf("Podaj tab[%d]: ", i);
		scanf("%d", &tab[i]);
	} 
	
	for(int i = 5; i>=0; i--)
		printf("tab[%d] = %d \n", i, tab[i]); 
	
	return 0; 
}

 