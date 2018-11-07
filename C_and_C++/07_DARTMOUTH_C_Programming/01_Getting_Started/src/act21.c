/*
================================================================================
Name        : act21.c
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
  double distanciaKm;
  double distanciaMi;
  const double km2Mi = .621371f;

  printf("Informe uma distância em Km: ");
  scanf("%lf", &distanciaKm);

  distanciaMi = distanciaKm * km2Mi;

  printf("%f", distanciaMi);

  return 0;
}
