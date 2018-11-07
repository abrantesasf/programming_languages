/*
=================================================================================
Name        : scanf_multi.c

Author      : Abrantes Araújo Silva Filho
              abrantesasf@gmail.com

C/C++ Std.  : C89/90

Version     :

Copyright   :

Course Info : Dartmouth/IMT: C Programming with Linux Professional Certificate
              https://www.edx.org/professional-certificate/dartmouth-imtx-c-programming-with-linux

              Course 01: C Programming: Getting Started
              https://www.edx.org/course/programming-in-c-getting-started

Description : Teste da função scanf com múltiplas entradas
=================================================================================
*/


/* Includes: */
#include <stdio.h>


/* Main: */
int main(void) {
  int a    = 0;
  int b    = 0;
  int c    = 0;
  int soma = 0;
  int qtd  = 0;

  printf("Quantas tríades de números você vai digitar?\n");
  scanf("%d", &qtd);

  int i = 0;
  for (i = 0; i < qtd; i++) {
    printf("Entre com a %dª tríade de inteiros: ", (i+1));
    scanf("%d%d%d", &a, &b, &c);
    soma = soma + (a * b * c);
  }
  printf("A soma da multiplicação dos números em cada tríade é de %d.", soma);
  return 0;
}
