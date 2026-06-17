/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Gustavo Bernardes dos Santos
Linguagem   : C
Plataforma  : https://judge.beecrowd.com/pt/search
Exercício   : https://judge.beecrowd.com/pt/problems/view/1175
Data        : 17/06/2026
Objetivo    : alterar ordem dos elementos em um vetor
Aprendizado : manipulação de vetores
-------------------------------------------------------------------------- */
#include <stdio.h>

int main(){
    int n[20], v[20], y, x = 0;
    for(int i = 0; i < 20; i++){
        scanf("%d", &y);
        v[i] = y;
    }
    for(int i = 19; i >= 0; i--){
        n[x] = v[i];
        printf("N[%d] = %d\n", x, n[x]);
        x++;
    }
    return 0;
}
