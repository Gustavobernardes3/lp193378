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

    char palavra[1000];

    while (fgets(palavra, sizeof(palavra), stdin) != NULL) {

        int i = 0, maiuscula = 1;

        while (palavra[i] != '\0') {
            if (palavra[i] == ' ') {
                i++;
                continue;
            }

            if (maiuscula) {
                palavra[i] = toupper(palavra[i]);
            } else {
                palavra[i] = tolower(palavra[i]);
            }

            maiuscula = !maiuscula;
            i++;
        }

        printf("%s", palavra);
    }

    return 0;
}
