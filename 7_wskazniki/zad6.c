/*  Napisać program znajdujący sumy roczne, roczne średnie oraz średnie miesięczne dla danych o opadach z kilku lat. */

#include <stdio.h>

#define MIESIACE 12
#define LATA 4

int read_avarage_data(int *wsk) {
  int suma = 0; 
  for(int i = 0; i<12; i++) {
    suma = suma + *(wsk);
    wsk++;
  }
  return suma; 
}

double read_avarage_data_by_months(int*wsk) {
  int suma =0; 
  for(int i = 0; i<4; i++){
    suma = suma + *(wsk);
    wsk = wsk+12; 
  }
  double avarage = suma/4.0; 
}

int main () {

  int deszcz[LATA][MIESIACE] = {
    {29, 34, 34, 39, 34, 47, 35, 27, 29, 28, 32, 38},  
    {24, 25, 30, 36, 29, 34, 30, 27, 27, 23, 28, 27},  
    {31, 36, 41, 42, 35, 43, 35, 30, 34, 31, 33, 37},  
    {39, 32, 50, 53, 39, 38, 50, 43, 36, 35, 54, 40}   
  };
  
  int suma[4];
  int sum = 0;
  double avarage = 0; 

  for(int i =0; i<4; i++) {
    int *wsk = deszcz[i];
    suma[i] = read_avarage_data(wsk);
  }

  printf("Suma opadow w poszczegolnych latach \n");
  
  for(int i = 0; i<4; i++){
    printf("%d \n", suma[i]);
    sum = sum + suma[i];
  }
  
  avarage = sum/4.0;
  printf("Srednia opadow to: %lf \n", avarage);

  printf("Srednia opadow w kazdym roku: \n");
  for(int i = 0; i<4; i++) {
    double avarage = suma[i]/12.0;
    printf("%lf \n", avarage);
  }

  double by_months[12]; 
  
  for(int j = 0; j<12; j++) {
      int *wsk = deszcz[0]+j;

      double value = read_avarage_data_by_months(wsk);
      by_months[j] = value;
      printf("miesiac[%d] = %lf \n", j+1, by_months[j]);
  }
  
  return 0;
}
