/*
================================================================================
Name        : act22.c
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
  double tempC;
  double tempF;

  printf("Informe uma temperatura em ºC: ");
  scanf("%lf", &tempC);

  tempF = (tempC * 9.0)/5.0 + 32.0;

  printf("A temperatura em ºF é: ");
  printf("%.1f", tempF);

  return 0;
}
