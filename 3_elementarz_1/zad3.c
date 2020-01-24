/* Program ten wypisuje liczby z tablicy tabela[]
   w odwrotnej kolejności: 12, 6, 4, 2, 1 za pomocą while*/
   
#include <stdio.h>

int main(){
	int tabela[] = {1, 2, 4, 6, 12};
	int len = sizeof(tabela)/sizeof(tabela[0]);
	
	int i = len - 1; 
	
	while(i>=0) {
		printf("tabela[%d] = %d \n", i, tabela[i]);
		i--; 
	}
	return 0; 
} 