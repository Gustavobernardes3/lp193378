/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Gustavo Bernardes dos Santos
Linguagem   : C
Plataforma  : https://judge.beecrowd.com/pt/search
Exercício   : https://judge.beecrowd.com/pt/problems/view/1241
Data        : 05/05/2026
Objetivo    : Ver se a string B encaixa nos ultimos digitos da string A
Aprendizado : Comparação de partes de strings
-------------------------------------------------------------------------- */
#include <stdio.h>
#include <string.h>

int main() {

    int N, i, f, tamanhoa, tamanhob, encaixa;
    char A[1000], B[1000];

    scanf("%d", &N);

    for(i = 0; i < N; i++){
        scanf("%s %s", A, B);

        tamanhoa = strlen(A);
        tamanhob = strlen(B);

        encaixa = 1;

        for(f = 0; f < tamanhob; f++){
            if(B[f] != A[tamanhoa - tamanhob + f]){
                encaixa = 0;
                break;
            }
        }

        if(encaixa)
            printf("encaixa\n");
        else
            printf("nao encaixa\n");
    }

    return 0;
}
