#include <stdio.h>

void find_ascii(int a) {
	if(a>0 && a<=255)
		printf("%c \n", (char) a);
	else
		printf("znak niedrukowalny \n"); 
}

int main() {
	
	int value; 

	for(int i = 0; i<5; i++) {
		printf("Podaj kod ASCII: "); 
		scanf("%d", &value);
		find_ascii(value);
	}
	
	return 0; 
	
}