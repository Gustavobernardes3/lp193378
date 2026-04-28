/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Gustavo Bernardes dos Santos
Linguagem   : C
Plataforma  : https://judge.beecrowd.com/pt/search
Exercício   : https://judge.beecrowd.com/pt/problems/view/1253
Data        : 21/04/2026
Objetivo    : cifra de cesar
Aprendizado : uso  de strings
-------------------------------------------------------------------------- */
#include <stdio.h>

int main() {

    int casos, i, f, num;
    char texto[60];

    scanf("%d", &casos);

    for(i=0; i < casos; i++) {

        scanf("%s", texto);
        scanf("%d", &num);

        f = 0;
        while (texto[f] != '\0') {
        
            texto[f] = texto[f] - num;

            if (texto[f] < 'A'){
                texto[f] = texto[f] + 26;
            }
            f++;
        }
        
        printf("%s\n", texto);
    }
    return 0;
}
