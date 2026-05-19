/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Gustavo Bernardes dos Santos
Linguagem   : C
Plataforma  : https://judge.beecrowd.com/pt/search
Exercício   : https://judge.beecrowd.com/pt/problems/view/1179
Data        : 19/05/2026
Objetivo    : mostrar numeros impares e pares entre 15 entradas  
Aprendizado : manipulação de vetores
-------------------------------------------------------------------------- */
#include <stdio.h>

int main() {
    int par[5], impar[5];
    int n, i, f;
    int qtdpar = 0;
    int qtdimpar = 0;

    for(i = 0; i < 15; i++) {
        scanf("%d", &n);

        if(n % 2 == 0) {
            par[qtdpar] = n;
            qtdpar++;
            
            if(qtdpar == 5) {
                for(f = 0; f < 5; f++) {
                    printf("par[%d] = %d\n", f, par[f]);
                }
                qtdpar = 0;
            }
        } 
        else {
            impar[qtdimpar] = n;
            qtdimpar++;
            
            if(qtdimpar == 5) {
                for(f = 0; f < 5; f++) {
                    printf("impar[%d] = %d\n", f, impar[f]);
                }
                qtdimpar = 0;
            }
        }
    }

    for(f = 0; f < qtdimpar; f++) {
        printf("impar[%d] = %d\n", f, impar[f]);
    }
    
    for(f = 0; f < qtdpar; f++) {
        printf("par[%d] = %d\n", f, par[f]);
    }

    return 0;
}
