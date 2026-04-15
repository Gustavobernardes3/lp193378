/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Gustavo Bernardes dos Santos
Linguagem   : C
Plataforma  : https://judge.beecrowd.com/pt/search
Exercício   : 2757
Data        : 15/04/2026
Objetivo    : Mostrar o mesmo número de diferentes formas
Aprendizado : Uso de %10d, %010d, e %-10d
-------------------------------------------------------------------------- */
#include <stdio.h>

int main()
{
   int A, B, C;
   scanf("%d %d %d", &A, &B, &C);
 
 if(A < -10000 || A > 10000) {
     return 0;
 }
 if(B < 0 || B > 99) {
     return 0;
 }
  if(C < 0 || C > 999) {
     return 0;
 }
  printf("A = %d, B = %d, C = %d\n", A, B, C);
  printf("A = %10d, B = %10d, C = %10d\n", A, B, C);
  printf("A = %010d, B = %010d, C = %010d\n", A, B, C);
  printf("A = %-10d, B = %-10d, C = %-10d\n", A, B, C);
  
  return 0;
  
}
