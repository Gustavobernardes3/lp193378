/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Gustavo Bernardes dos Santos
Linguagem   : C
Plataforma  : https://judge.beecrowd.com/pt/search
Exercício   : https://judge.beecrowd.com/pt/problems/view/1234
Data        : 27/04/2026
Objetivo    : alternar maiusculas e minusculas
Aprendizado : uso  de strings
-------------------------------------------------------------------------- */
#include <stdio.h>
#include <ctype.h>

int main() {

    int i=0, maiscula = 1;
    char palavra[100];

    fgets(palavra, 100, stdin);

    while (palavra[i] != '\0') {
        if (palavra[i] == ' ' || palavra[i] == '\n') {
            i++;
            continue;
        }
        if (maiscula == 1) {
            palavra[i] = toupper(palavra[i]);
        }
        else {
            palavra[i] = tolower(palavra[i]);
        }
        maiscula = !maiscula;
        i++;
    }

    printf("%s", palavra);

    return 0;
}
