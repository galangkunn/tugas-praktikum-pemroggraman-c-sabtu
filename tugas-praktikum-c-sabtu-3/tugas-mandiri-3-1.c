#include <stdio.h>

//Compiler version gcc  6.3.0

int main()
{
  float sa,t,kl,l;
  printf("Masukan sisi Alas Segitiga dalam cm : ");
  scanf("%f", &sa);
  printf("Masukkan tinggi segitiga dalam cm : ");
  scanf("%f", &t);
  kl = 3*sa;
  l = 0.5*sa*t;
  printf("Keliling Segitiga Tersebut adalah %.2f cm \n",kl);
  printf("Luas Segitiga Tersebut adalah %.2f cm",l);
  return 0;
}