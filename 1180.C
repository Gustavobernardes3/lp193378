/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Gustavo Bernardes dos Santos
Linguagem   : C
Plataforma  : https://judge.beecrowd.com/pt/search
Exercício   : https://judge.beecrowd.com/pt/problems/view/1180
Data        : 18/06/2026
Objetivo    : achar posição e menor numero de um vetor
Aprendizado : manipulação de vetores
-------------------------------------------------------------------------- */
#include <stdio.h>

int main(){
    int n, i, menor, maior, posicao = 0;
    scanf("%d", &n);
    int x[n];
    scanf("%d", &x[0]);
    menor = x[0];

    for(i = 1; i < n; i++){
        scanf("%d", &x[i]);
        if(x[i] < menor){
            menor = x[i];
            posicao = i;
        }

    }
    printf("Menor valor: %d\n", menor);
    printf("Posicao: %d\n", posicao);
    return 0;
}
