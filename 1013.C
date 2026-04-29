/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Gustavo Bernardes dos Santos
Linguagem   : C
Plataforma  : https://judge.beecrowd.com/pt/search
Exercício   : https://judge.beecrowd.com/pt/problems/view/1013
Data        : 15/04/2026
Objetivo    : mostrar maior de 3 números 
Aprendizado : utilizar outra biblioteca e abs
-------------------------------------------------------------------------- */
#include <stdio.h>
#include <stdlib.h>

int main()
{
   int a, b, c, maiorab, maiorfinal;
   scanf("%d %d %d", &a, &b, &c);
   
   maiorab = (a + b + abs(a-b)) / 2;
   maiorfinal = (maiorab + c + abs(maiorab - c))/2;
   printf("%d eh o maior\n", maiorfinal);
   return 0;
}
