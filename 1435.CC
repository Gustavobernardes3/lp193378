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
                int cima = i;
                int baixo = n - 1 - i;
                int esq = j;
                int dir = n - 1 - j;

                int menor = cima;
                if (baixo < menor) menor = baixo;
                if (esq < menor) menor = esq;
                if (dir < menor) menor = dir;

                int num = menor + 1;

                if (j > 0) {
                    printf(" ");
                }

                printf("%3d", num);
            }
            printf("\n");
        }
        printf("\n");
    }

    return 0;
}
