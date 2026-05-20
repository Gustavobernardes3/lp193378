/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Gustavo Bernardes dos Santos
Linguagem   : C
Plataforma  : https://judge.beecrowd.com/pt/search
Exercício   : https://judge.beecrowd.com/pt/problems/view/1168
Data        : 19/05/2026
Objetivo    : contar leds necessarios para cada numero
Aprendizado : uso de switch
-------------------------------------------------------------------------- */
#include <stdio.h>

int main() {
    int n, i, f, soma = 0;
    char v[1000];
    scanf("%d", &n);
    for(i = 0; i < n; i++){
        scanf("%s", &v);
        for(f = 0; v[f] != '\0'; f++){
            switch(v[f]){
                case '0':
                soma = soma + 6;
                break;
                case '1':
                soma = soma + 2;
                break;
                case '2':
                soma = soma + 5;
                break;
                case '3':
                soma = soma + 5;
                break;
                case '4':
                soma = soma + 4;
                break;
                case '5':
                soma = soma + 5;
                break;
                case '6':
                soma = soma + 6;
                break;
                case '7':
                soma = soma + 3;
                break;
                case '8':
                soma = soma + 7;
                break;
                case '9':
                soma = soma + 6;
                break;
            }
        }
        printf("%d leds\n", soma);
        soma = 0;
    }
    return 0;
}
