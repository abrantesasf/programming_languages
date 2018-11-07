/*
================================================================================
Name        : act26.c
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

  double dinheiro = .0;
  double preco    = .0;
  int    qtd      =  0;

  printf("Informe quanto dinheiro você tem: ");
  scanf("%lf", &dinheiro);

  printf("Informe o preço por livro: ");
  scanf("%lf", &preco);

  qtd = (int) (dinheiro / preco);

  printf("O número de livros que você poderá comprar é de: ");
  printf("%d", qtd);

  return 0;
}
