/*
================================================================================
Name        : act24.c
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

  int    alunos = 0;
  int    nota   = 0;
  int    soma   = 0;
  double media  = 0;
  int    i;

  printf("Informe a quantidade de notas: ");
  scanf("%d", &alunos);

  for (i = 0; i < alunos; i++) {
    printf("Informe a nota do aluno %d: ", (i + 1));
    scanf("%d", &nota);
    soma = soma + nota;
  }

  media = (double) soma / alunos;

  printf("A média da turma é de: ");
  printf("%.2f", media);

  return 0;
}
