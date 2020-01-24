/* Napisać funkcję rekurencyjną, która wypisuje wszystkie n-wyrazowe ciągi binarne. */

#include <stdio.h>

void rec2(int val, int count, int b) {
  if(count <=1) {
    for(int i = b-1; i >=0; i--) {
      printf("%d", (val >> i) & 1);
    }
    printf("\n");
  } else {
    rec2(val*2, count -1,b);
    rec2(val*2 +1, count -1, b);  
  }
}

void rec(int val, int count) {
  rec2(val, count, count);
}

int main(){

  rec(0,3);
  rec(1,3);

  return 0;
}

