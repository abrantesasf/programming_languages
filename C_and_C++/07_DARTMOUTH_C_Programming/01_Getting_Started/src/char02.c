/*
================================================================================
Name        : char02.c
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
  char letter;
  int  cruzes =  5;
  int  letras = -1;
  int  l;
  int  i;
  
  printf("Digite um único caractere: ");
  scanf("%c", &letter);

  for (l = 0; l < 5 ; l++) {
    letras = letras + 2;
    cruzes = cruzes - 1;
    for (i = 0; i < cruzes; i++) {
      printf("+");
    }
    for (i = 0; i < letras; i++) {
      printf("%c", letter);
    }
    for (i = 0; i < cruzes; i++) {
      printf("+");
    }
    printf("\n");
  }

  return 0;
}
