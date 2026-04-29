/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Gustavo Bernardes dos Santos
Linguagem   : C
Plataforma  : https://judge.beecrowd.com/pt/search
Exercício   : https://judge.beecrowd.com/pt/problems/view/1071
Data        : 16/04/2026
Objetivo    : Soma de impares entre dois numeros
Aprendizado : Uso de for 
-------------------------------------------------------------------------- */
#include <stdio.h>

int main() {
   int x, y, min, max, i, soma = 0;
   
   scanf("%d", &x);
   scanf("%d", &y);
   
   if(x < y){
       min = x;
       max = y;
   } 
   else{
       min = y;
       max = x;
   }
  
   for (i = min + 1; i < max; i++) {
       if(i % 2 != 0){
           soma = soma + i;
       }
   }
   printf("%d\n", soma);
   return 0;


}
