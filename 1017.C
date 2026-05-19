/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Gustavo Bernardes dos Santos
Linguagem   : C
Plataforma  : https://judge.beecrowd.com/pt/search
Exercício   : https://judge.beecrowd.com/pt/problems/view/1017
Data        : 19/05/2026
Objetivo    : calcular consumo de combustivel
Aprendizado : uso de funções
-------------------------------------------------------------------------- */
#include <stdio.h>
 
float calcularlitros(int tempo, int velocidade){
    return (velocidade / 12.0 ) * tempo; 
}
int main() {
    int x, y;
    float consumo;
    scanf("%d", &x);
    scanf("%d", &y);
    
    consumo = calcularlitros(x, y);
    printf("%.3f\n", consumo);
 
    return 0;
}
