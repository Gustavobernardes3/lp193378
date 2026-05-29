/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Gustavo Bernardes dos Santos
Linguagem   : C
Plataforma  : https://judge.beecrowd.com/pt/search
Exercício   : https://judge.beecrowd.com/pt/problems/view/1169
Data        : 29/05/2026
Objetivo    : resolvver problema exponencial do grão de trigo
Aprendizado : uso de tipo unsigned long long
-------------------------------------------------------------------------- */
#include <stdio.h>
unsigned long long graos(int a) {
    if(a == 1) {
        return 1;
    }
    return graos(a - 1) * 2;
}
int main() {
    int i, n, x;
    unsigned long long kg;
    scanf("%d", &n);
    for(i = 0; i < n; i++){
        scanf("%d", &x);
        kg = graos(x) / 6000;
        printf("%llu kg\n", kg);
    }


    return 0;
}
