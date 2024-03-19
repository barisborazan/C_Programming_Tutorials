#include <stdio.h>
#include <ctype.h>

#define  SIZE  100

//ilave dizi kullanmadan iki sozcuk arasında bosluk olacak sekilde yerlerini degistir

int main(void) 
{
  char str[SIZE];

  printf("iki sozcuk girin: ");
  //iki sozcuk arasinda bosluk olmali
  sgets(str);  //header file'dan cagiriliyor
  printf("[%s]\n", str);

  /*SOLUTION*/
  
  printf("[%s]\n", str);  //test
}
