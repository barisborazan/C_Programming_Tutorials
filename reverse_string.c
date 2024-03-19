#include <stdio.h>
#include <ctype.h>

#define  SIZE  100

int main(void) 
{
  char str[SIZE];

  printf("iki sozcuk girin: ");
  sgets(str);  //header file'dan cagiriliyor
  printf("[%s]\n", str);

  int len = 0;
  while (str[len])
    ++len;

  for (int i = 0; i < len / 2; ++i) {
    char temp = str[i];
    str[i] = str[len - 1 - i];
    str[len - 1 - i] = temp;
  }
  
  printf("[%s]\n", str);
}
