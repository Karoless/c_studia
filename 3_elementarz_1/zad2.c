/* Program ten wypisuje liczby z tablicy tabela[]
   w odwrotnej kolejności: 12, 6, 4, 2, 1 */

#include <stdio.h>

int main(){
	int tabela[] = {1, 2, 4, 6, 12};
	int len = sizeof(tabela)/sizeof(tabela[0]);
	
	for(int i = len-1; i>=0; i--)
		printf("tabela[%d] = %d \n", i, tabela[i]);
	
	return 0; 
} 