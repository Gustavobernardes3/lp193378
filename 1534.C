/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Gustavo Bernardes dos Santos
Linguagem   : C
Plataforma  : https://judge.beecrowd.com/pt/search
Exercício   : https://judge.beecrowd.com/pt/problems/view/1534
Data        : 13/05/2026
Objetivo    : fazer matriz com elementos das diagonais 1 e 2 
Aprendizado : fazer uma matriz
-------------------------------------------------------------------------- */
#include <stdio.h>
 
int main() {
 
    int n, i, j;
    while (scanf("%d", &n) != EOF) {
        for(i = 0; i < n; i++){
            for(j = 0; j < n; j++){
                if(i + j == n - 1){
                    printf("2");
                }
                else if(i == j){
                    printf ("1");
                }
                else{
                    printf("3");
                }
            }
            printf("\n");
        }
    }

 
    return 0;
}
