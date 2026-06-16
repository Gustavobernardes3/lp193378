/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Gustavo Bernardes dos Santos
Linguagem   : C
Plataforma  : https://judge.beecrowd.com/pt/search
Exercício   : https://judge.beecrowd.com/pt/problems/view/1031
Data        : 10/06/2026
Objetivo    : fazer matriz quadrada de ordem n
Aprendizado : manipulação de matriz
-------------------------------------------------------------------------- */
#include <stdio.h>

int main() {
    int n;

    while (scanf("%d", &n) == 1 && n != 0) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                int dist_cima = i;
                int dist_baixo = n - 1 - i;
                int dist_esquerda = j;
                int dist_direita = n - 1 - j;

                int menor = dist_cima;
                if (dist_baixo < menor) menor = dist_baixo;
                if (dist_esquerda < menor) menor = dist_esquerda;
                if (dist_direita < menor) menor = dist_direita;

                int valor = menor + 1;

                if (j > 0) {
                    printf(" ");
                }

                printf("%3d", valor);
            }
            printf("\n");
        }
        printf("\n");
    }

    return 0;
}
