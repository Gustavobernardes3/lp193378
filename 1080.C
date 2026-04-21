/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Gustavo Bernardes dos Santos
Linguagem   : C
Plataforma  : https://judge.beecrowd.com/pt/search
Exercício   : https://judge.beecrowd.com/pt/problems/view/1080
Data        : 15/04/2026
Objetivo    : 100 numeros mostrar o maior 
Aprendizado : uso  de vetores
-------------------------------------------------------------------------- */
#include <stdio.h>
 
int main() {
    
    int x[100], maior = -1, posicao = -1, i;
    
    for (i = 0; i < 100; i++) {
        scanf("%d", &x[i]);
        
        if (x[i] < 0) {
            return 0;
        }
        
        if (x[i] > maior) {
            maior = x[i];
            posicao = i + 1;
        }
    }
    
    printf("%d", maior);
    printf("%d", posicao);
}
