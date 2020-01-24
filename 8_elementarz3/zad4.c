/* Napisz program tworzący histogram częstości występowania różnych znaków podanych na stdin.*/

#include<stdio.h>

int main(){

  int znaki[256], i, c;

  for(i=0; i<=255; i++) znaki[i] = 0;

  while((c=getchar())!=EOF) znaki[c]++;

  for(i=0; i<=255; i++)
    if(znaki[i]>0) printf("%c %d %d\n", i, i, znaki[i]);

  return 0;
}
