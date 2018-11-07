/*
================================================================================
Name        : .c
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

  /* Declarações inválidas
  int 3littlePigs;
  int (counter pigs);
  int for;
  */
  int is_ItWrong;
  int three_little_pigs;
  int Balance;
  int balance;

  is_ItWrong = 0;
  three_little_pigs = 3;
  Balance = 1;
  balance = 2;

  printf("Balance = %d\n", Balance);
  printf("balance = %d\n", balance);

  printf("three_little_pigs = %d\n", three_little_pigs);
  printf("is_ItWrong = %d\n", is_ItWrong);
  return 0;
}
