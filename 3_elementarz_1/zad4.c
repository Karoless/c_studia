/*  Napisać program obliczający silnię z podanej, niezbyt dużej, liczby naturalnej. */

#include <stdio.h>

void silnia(int value){
	int result=1; 
	
	if(value<0)
		printf("Nie ma silni z liczby ujemnej\n");
	else if(value == 0 || value == 1)
		printf("Silnia z %d = 1\n", value);
	else {
		for(int i = 1; i<=value; i++)
			result = result*i;
		printf("%d! = %d\n", value, result);
		
	}
			
}

int main() {
	
	int value;
	
	printf("Podaj wartość z jakiej mam obliczyć silnie: ");
	scanf("%d", &value);
	
	silnia(value);
	
	return 0; 
}
 