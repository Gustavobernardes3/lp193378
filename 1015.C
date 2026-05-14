/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Gustavo Bernardes dos Santos
Linguagem   : C
Plataforma  : https://judge.beecrowd.com/pt/search
Exercício   : https://judge.beecrowd.com/pt/problems/view/1015
Data        : 14/05/2026
Objetivo    : calcular distancia entre dois pontos 
Aprendizado : utilizar funções da biblioteca math
-------------------------------------------------------------------------- */
#include <stdio.h>
#include <math.h>
 
int main() {
 
    float x1, y1, x2, y2, distancia;
    scanf("%f %f", &x1, &y1);
    scanf("%f %f", &x2, &y2);
    
    distancia = sqrt( pow(x2 - x1, 2) + pow(y2 - y1, 2));
    printf("%.4f\n", distancia);
    
 
    return 0;
}
