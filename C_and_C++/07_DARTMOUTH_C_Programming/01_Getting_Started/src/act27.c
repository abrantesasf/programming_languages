/*
================================================================================
Name        : act27.c
Description : 
Author      : Abrantes Araújo Silva Filho
            : abrantesasf@gmail.com
C Standard  : C89/90
Version     : 
Copyright   : 
Course Info : Dartmouth/IMT: C Programming with Linux Professional Certificate
            :    https://www.edx.org/professional-certificate/dartmouth-imtx-c-programming-with-linux
            : Course 01: C Programming: Getting Started
            :    https://www.edx.org/course/programming-in-c-getting-started
================================================================================
*/


/* Includes: */
#include <stdio.h>


/* Main: */
int main(void) {

  double qtdCimento =   .0;
  int    sacos      =    0;
  int    valor      =    0;

  printf("Informe a quantidade de cimento (real): ");
  scanf("%lf", &qtdCimento);

  sacos = (int) (qtdCimento / 120);

  if ( (double)(sacos * 120) < qtdCimento ) {
    sacos = sacos + 1;
  }

  valor = sacos * 45;

  printf("Você gastará: ");
  printf("%d", valor);  

  return 0;
}
