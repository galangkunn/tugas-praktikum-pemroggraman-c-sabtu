#include <stdio.h>

//Compiler version gcc  6.3.0

int main()
{
  float cel,rea,fah;
  printf("masukan suhu dalam celcius : ");
  scanf("%f",&cel);
  rea = (4.0/5.0)*cel;
  fah = ((9.0/5.0)*cel)+32;
  printf("%.2f °celcius",cel);
  printf("%.2f °reamur",rea);
  printf("%.2f °fahrenheit",fah);
  return 0;
}