/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Gustavo Bernardes dos Santos
Linguagem   : C
Plataforma  : https://judge.beecrowd.com/pt/search
Exercício   : https://judge.beecrowd.com/pt/problems/view/1024
Data        : 16/06/2026
Objetivo    : alterar texto
Aprendizado : manipulação de string
-------------------------------------------------------------------------- */
#include <stdio.h>
#include <string.h>

void inverter(char *str, int tam) {
    int i, j;
    char temp;
    for (i = 0, j = tam - 1; i < j; i++, j--) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
}

int main() {
    int n, i, j, tam;
    char str[1002];

    if (scanf("%d", &n) != 1) return 0;
    getchar();

    for (i = 0; i < n; i++) {
        if (fgets(str, sizeof(str), stdin) == NULL) break;

        tam = strlen(str);
        if (tam > 0 && str[tam - 1] == '\n') {
            str[tam - 1] = '\0';
            tam--;
        }

        for (j = 0; j < tam; j++) {
            if ((str[j] >= 'A' && str[j] <= 'Z') || (str[j] >= 'a' && str[j] <= 'z')) {
                str[j] += 3;
            }
        }

        inverter(str, tam);

        for (j = tam / 2; j < tam; j++) {
            str[j] -= 1;
        }

        printf("%s\n", str);
    }

    return 0;
}
