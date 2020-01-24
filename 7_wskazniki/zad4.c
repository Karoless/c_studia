/* Napisz funkcję, która zwraca różnicę między największym i najmniejszym elementem
 tablicy podanej jako argument funkcji. Przetestuj ją w prostym programie. */
 
 #include <stdio.h>

void read_data(int *tab, int len){

  for(int i = 0; i < len; i++) {
    printf("podaj wartość tab[%d]: ", i);
    scanf("%d", tab);
    tab++;
  }
}

void print_table(int *tab, int len){

  for(int i = 0; i < len; i++) {
    printf("tab[%d] = %d \n", i, *(tab+i)); 
  }

}

void check_values(int *tab, int len) {
  int min, max;
  min = *(tab);
  max = *(tab);

  for(int i=0; i<len; i++) {
    if(*(tab+i) > max) 
      max = *(tab+i);
    else if(*(tab+i) < min)
      min = *(tab+i);
  }

  printf("Wartość maksymalna w tablicy: %d \n", max);
  printf("Wartość minimalna w tablicy: %d \n", min);
  printf("Różnica: %d \n", max - min);
  
}

int main () {
  
  int n;
  printf("Podaj wielkość tab, którą mam utworzyć: ");
  scanf("%d", &n);

  int tab[n];
  int *wsk = tab;
  read_data(wsk, n);
  print_table(wsk, n);
  check_values(wsk, n); 

  return 0; 
  
}