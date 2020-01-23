#include <stdio.h>

int main() {
	
	int a,b,c;
	double d;
	
	printf("Podaj liczbę  całkowitą a: ");
	scanf("%d", &a);
	printf("Podaj liczby całkowite b, c ");
	scanf("%d %d", &b, &c);
	printf("Podaj liczbę zmiennoprzecinkową d: ");
	scanf("%lf", &d);
	
	printf("Wczytane liczby to:\n a = %d\n b = %d\n c = %d\n d = %.4lf \n", a, b, c, d);
	
	return 0; 
	
}