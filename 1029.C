/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Gustavo Bernardes dos Santos
Linguagem   : C
Plataforma  : https://judge.beecrowd.com/pt/search
Exercício   : https://judge.beecrowd.com/pt/problems/view/1029
Data        : 27/05/2026
Objetivo    : fazer sequencia de fibonacci
Aprendizado : uso de função recursiva para fazer sequencia de fibonacci
-------------------------------------------------------------------------- */
#include <stdio.h>
int calls;
int fib(int a){
    calls++;
    if(a == 0){
        return 0;
    }
    if(a == 1){
        return 1;
    }
    return fib(a - 1) + fib(a - 2);
}
int main() {
    int n, i, x, soma;
    scanf("%d", &n);
    for(i = 0; i < n; i++){
        scanf("%d", &x);
        calls = 0;
        soma = fib(x);;
        printf("fib(%d) = %d calls = %d\n", x, calls - 1, soma);
    }

    return 0;
}
