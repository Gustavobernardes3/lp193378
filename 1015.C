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

float funcao(float a, float b, float c, float d){
    return sqrt( pow(b - a, 2) + pow (d - c, 2));
} 
int main() {
 
    float x1, y1, x2, y2, distancia;
    scanf("%f %f", &x1, &y1);
    scanf("%f %f", &x2, &y2);
    
    distancia = funcao(x1, x2, y1, y2);
    printf("%.4f\n", distancia);
    
 
    return 0;
}
