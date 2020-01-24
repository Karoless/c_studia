/*3. Napisz program, który wczyta dwie liczby całkowite a i b (a<b) 
a następnie wypisze wszystkie liczby całkowite pomiędzy a i b. */

#include <stdio.h>

int main() {
	
	int a, b; 
	do{
	printf("Podaj start przedziału a i koniec b: ");
	scanf("%d %d", &a, &b); 
	
	if(a>b)
		printf("Początek przedziału musi być mniejszy od jego końca \nPodaj wartosci jeszcze raz! \n");
	}while(a>b); 
	
	for(int i = a + 1 ; i<b; i++) {
		printf("%d \n", i);
	}
}