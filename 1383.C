/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Gustavo Bernardes dos Santos
Linguagem   : C
Plataforma  : https://judge.beecrowd.com/pt/search
Exercício   : https://judge.beecrowd.com/pt/problems/view/1083
Data        : 10/06/2026
Objetivo    : verificar se uma matriz 9×9 preenchida representa uma solução válida para o jogo Sudoku.
Aprendizado : manipulação de matrizes
-------------------------------------------------------------------------- */
#include <stdio.h>

int x[9][9];

int valido(int a[9]) {
    int visto[10] = {0};
    for (int i = 0; i < 9; i++) {
        int v = a[i];
        if (v < 1 || v > 9 || visto[v]) {
            return 0;
        }
        visto[v] = 1;
    }
    return 1;
}

int main() {
    int n;
    if (scanf("%d", &n) != 1) return 0;

    for (int f = 0; f < n; f++) {
        int ok = 1;

        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {
                scanf("%d", &x[i][j]);
            }
        }

        for (int i = 0; i < 9 && ok; i++) {
            if (!valido(x[i])) {
                ok = 0;
            }
        }

        for (int j = 0; j < 9 && ok; j++) {
            int coluna[9];
            for (int i = 0; i < 9; i++) {
                coluna[i] = x[i][j];
            }
            if (!valido(coluna)) {
                ok = 0;
            }
        }     

        for (int i = 0; i < 9 && ok; i += 3) {
            for (int j = 0; j < 9 && ok; j += 3) {
                int bloco[9], r = 0;
                for (int k = 0; k < 3; k++) {
                    for (int l = 0; l < 3; l++) {
                        bloco[r++] = x[i + k][j + l];
                    }
                }
                if (!valido(bloco)) {
                    ok = 0;
                }
            }
        }

        printf("Instancia %d\n", f + 1);
        if (ok) {
            printf("SIM\n");
        } else {
            printf("NAO\n");
        }
        printf("\n");
    }

    return 0;
}
