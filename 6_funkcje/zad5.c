/* funkcja rysująca prostokąt */

#include <stdio.h>

void prostokat(int width, int height) {
  for(int i=0; i<height; i++) {
    if(i == 0 || i == (height-1))
      for(int j = 0; j<width; j++)
	  printf("*");
    else
      for(int j =0; j<width; j++)
	if(j == 0 || j == (width-1))
	   printf("*");
	else
	   printf(" ");
    printf("\n");
  }
}

int main() {

  prostokat(5,4);

  return 0;
}