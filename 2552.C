/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Gustavo Bernardes dos Santos
Linguagem   : C
Plataforma  : https://judge.beecrowd.com/pt/search
Exercício   : https://judge.beecrowd.com/pt/problems/view/2552
Data        : 17/06/2026
Objetivo    : fazer um tipo de campo minado
Aprendizado : manipulação de matriz
-------------------------------------------------------------------------- */
#include <stdio.h>

int main(){
    int i, j;

    while (scanf("%d %d", &i, &j) != EOF) {

        int x[i][j];
        int resp[i][j];

        for(int f = 0; f < i; f++){
            for(int l = 0; l < j; l++){
                scanf("%d", &x[f][l]);
            }
        }

        for(int f = 0; f < i; f++){
            for(int l = 0; l < j; l++){

                if(x[f][l] > 0){
                    resp[f][l] = 9;
                }
                else{
                    resp[f][l] = 0;

                    if(f + 1 < i && x[f + 1][l] > 0){
                        resp[f][l]++;
                    }
                    if(f - 1 >= 0 && x[f - 1][l] > 0){
                        resp[f][l]++;
                    }
                    if(l + 1 < j && x[f][l + 1] > 0){
                        resp[f][l]++;
                    }
                    if(l - 1 >= 0 && x[f][l - 1] > 0){
                        resp[f][l]++;
                    }
                }
            }
        }

        for(int f = 0; f < i; f++){
            for(int l = 0; l < j; l++){
                printf("%d", resp[f][l]);
            }
            printf("\n");
        }
    }

    return 0;
}
