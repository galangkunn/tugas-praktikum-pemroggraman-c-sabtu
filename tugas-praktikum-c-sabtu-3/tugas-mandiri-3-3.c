#include <stdio.h>

//Compiler version gcc  6.3.0

int main()
{
  float a,t;
  printf("Masukan Panjang Alas : ");
  scanf("%f",&a);
  printf("Masukan Tinggi : ");
  scanf("%f",&t);
  float c = sqrt((a*a)+(t*t));
  printf("Sisi Miring Segitiga tersebut adalah %.2f cmq",c);
  
  return 0;
}