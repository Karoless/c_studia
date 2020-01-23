/* Program ten dla dwóch liczb wczytanych z klawiatury
   wypisuje, która z nich jest większa. */
   
#include <stdio.h>
int main()
{
   int licz1, licz2; 

   printf("Podaj pierwsza liczbe: ");
   scanf("%d", &licz1);
   printf("Podaj drugą liczbe: ");
   scanf("%d", &licz2);
   
   if (licz1>licz2)
	   printf("Większa liczba to: %d \n", licz1);
   else if(licz1<licz2)
	   printf("Większa liczba to: %d \n", licz2);
   else
	   printf("Liczby są sobie równe \n");
   
   
   return 0;
}
