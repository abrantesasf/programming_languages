/*
================================================================================
Name        : act23.c
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

  int caixas;
  int bolas;
  int caixasCheias;
  int resto;

  printf("Informe o número de bolas: ");
  scanf("%d", &bolas);

  printf("Informe o número e caixas: ");
  scanf("%d", &caixas);

  caixasCheias = bolas/caixas;
  resto = bolas%caixas;

  printf("O número de caixas cheias é de: ");
  printf("%d", caixasCheias);
  printf("\n");
  printf("O número de bolas restantes é de: ");
  printf("%d", resto);

  return 0;
}
