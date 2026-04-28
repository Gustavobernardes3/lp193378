/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Gustavo Bernardes dos Santos
Linguagem   : C
Plataforma  : https://judge.beecrowd.com/pt/search
Exercício   : https://judge.beecrowd.com/pt/problems/view/1078
Data        : 28/04/2026
Objetivo    : fazer tabuada de um numero entre 2 e 1000
Aprendizado : fazer tabuada
-------------------------------------------------------------------------- */
/#include <stdio.h>
 
int main() {
 
    int n, i, valor;
    scanf("%d", &n);
    if(n < 2 || n > 1000){
        return 0;
    }
    for(i = 1; i <= 10; i++){
        valor = i * n;
        printf("%d x %d = %d\n", i, n, valor);
    }
 
    return 0;
}
