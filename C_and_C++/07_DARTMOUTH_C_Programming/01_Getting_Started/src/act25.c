/*
================================================================================
Name        : act25.c
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

  int    populacao =  0;
  double taxa      = .0;
  double delta     = .0;
  int    popEstim  =  0;
  
  printf("Informe a população atual (inteiro): ");
  scanf("%d", &populacao);

  printf("Informe a taxa de crescimento populacional (real): ");
  scanf("%lf", &taxa);

  delta = (double) populacao * (taxa / 100.0);

  popEstim = (int) (populacao + delta);

  printf("A população estimada é de: ");
  printf("%d", popEstim);

  return 0;
}
