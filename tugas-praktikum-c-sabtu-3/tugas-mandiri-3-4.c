#include <stdio.h>

//Compiler version gcc  6.3.0

int main()
{
  int bil;
  printf("masukkan bilangan : ");
  scanf("%d",&bil);
  
  if (bil % 2 == 0){
    printf("%d Adalah Bilangan Genap",bil);
  }
  else{
    printf("%d Adalah Bilangan Ganjil",bil);
  }
}