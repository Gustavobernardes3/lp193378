/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Gustavo Bernardes dos Santos
Linguagem   : C
Plataforma  : https://judge.beecrowd.com/pt/search
Exercício   : https://judge.beecrowd.com/pt/problems/view/1030
Data        : 10/06/2026
Objetivo    : resolver problema de josephus
Aprendizado : relizar permutação circular
-------------------------------------------------------------------------- */
#include <stdio.h>

int josephus(int n, int k) {
    int pos = 0;
    for (int i = 2; i <= n; i++) {
        pos = (pos + k) % i;
    }
    return pos + 1;
}

int main() {
    int NC;
    if (scanf("%d", &NC) != 1) return 0;

    for (int i = 1; i <= NC; i++) {
        int n, k;
        scanf("%d %d", &n, &k);
        
        int sobrevivente = josephus(n, k);
        printf("Case %d: %d\n", i, sobrevivente);
    }

    return 0;
}
