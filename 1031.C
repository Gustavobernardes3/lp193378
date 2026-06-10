/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Gustavo Bernardes dos Santos
Linguagem   : C
Plataforma  : https://judge.beecrowd.com/pt/search
Exercício   : https://judge.beecrowd.com/pt/problems/view/1031
Data        : 10/06/2026
Objetivo    : ver numero para que regiao 13 seja a ultima a desligar
Aprendizado : uso de função para um tipo de permutação
-------------------------------------------------------------------------- */
#include <stdio.h>

int restante(int n, int k) {
    int pos = 0;
    for (int i = 1; i < n; i++) {
        pos = (pos + k) % i;
    }
    return pos;
}

int main() {
    int n;
    while (scanf("%d", &n) == 1 && n != 0) {
        int k = 1;
        while (restante(n, k) != 11) {
            k++;
        }
        printf("%d\n", k);
    }
    return 0;
}
