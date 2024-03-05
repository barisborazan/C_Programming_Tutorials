// QUESTION:
//  Find the unique numbers in an array created by a random integer generator

#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(void)
{
  int a[20];

  srand((unsigned)time(0));
  for (int i = 0; i < 20; ++i) {
    a[i] = rand() % 20;
    printf("%3d ", a[i]);
  }
  printf("\n");
  
  // WRITE YOUR CODE BELOW
  
  //
}
