/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Gustavo Bernardes dos Santos
Linguagem   : C
Plataforma  : https://judge.beecrowd.com/pt/search
Exercício   : https://judge.beecrowd.com/pt/problems/view/1028
Data        : 26/05/2026
Objetivo    : numero de maximo de cartas nas pilhas
Aprendizado : uso de função recursiva para calculo de mdc
-------------------------------------------------------------------------- */
#include <stdio.h>
int mdc(int a, int b) {
    if (b == 0) {
        return a;
    }
    return mdc(b, a % b);
}
int main() {
    int n, i, f1, f2, pilha;
    scanf("%d", &n);
    for(i = 0; i < n; i++){
        scanf("%d %d", &f1, &f2);
        pilha = mdc(f1, f2);
        printf("%d\n", pilha);
    }
 
    return 0;
}
