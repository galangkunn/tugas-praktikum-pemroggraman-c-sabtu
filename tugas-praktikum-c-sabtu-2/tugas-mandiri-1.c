#include <stdio.h>

//Compiler version gcc  6.3.0

int main()
{
  int a,t;
  a = 8;
  t = 5;
  float l = 0.5*a*t;
  printf("panjang alas segitiga tersebut adalah %i cm\n",a);
  printf("tinggi segitiga tersebut adalah %i cm\n",t);
  printf("luas segitiga tersebut adalah %.3f m²",l);
  return 0;
}