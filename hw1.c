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
  for (int i = 0; i < 20; ++i) {
    for (int k = 0; k < 20; ++k) {
      if (i != k && a[i] == a[k]) {
        break;
      }
      if (k = 20)
        printf("%3d ", a[i]);
    }
  }
  printf("\n");

  //Alternate Solution
  /*
  int counts[20] = { 0 };

  for (int i = 0; i < 20; ++i) {
    ++counts[a[i]];
  }

  for (int i = 0; i < 20; ++i) {
    if (counts[i] == 1)
      printf("%3d ", i);
  }*/

  // put stars as many as the integer
  for (int i = 0; i < 20; ++i) {
    for (int k = 0; k < a[i]; ++k) {
      putchar('*');
    }
    putchar('\n');
  }

  //now put the stars as a histogram
      int max = a[0];
    for (int i = 1; i < 20; ++i) {
        if (a[i] > max) {
            max = a[i];
        }
    }
    for (int i = max; i > 0; --i) {
        for (int j = 0; j < 20; ++j) {
            if (a[j] >= i) {
                printf("* ");
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }
}
