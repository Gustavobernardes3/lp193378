/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Gustavo Bernardes dos Santos
Linguagem   : C
Plataforma  : https://judge.beecrowd.com/pt/search
Exercício   : https://judge.beecrowd.com/pt/problems/view/1024
Data        : 16/06/2026
Objetivo    : alterar texto
Aprendizado : manipulação de string
-------------------------------------------------------------------------- */
#include <stdio.h>
#include <string.h>

int main(){
    char name[1005], invert[1005];
    int n, i, j, f;
    scanf("%d", &n);
    getchar();
    for(i = 0; i < n; i++){
        j = 0;
        fgets(name, 1005, stdin);
        name[strcspn(name, "\n")] = '\0';
        while(name[j] != '\0'){
            if(name[j] >= 'a' && name[j] <= 'z' ||  name[j] >= 'A' && name[j] <= 'Z'){
                name[j] += 3;
            }  
            j++;     
        }
        j = 0;
        int tam = strlen(name);
        f = tam - 1;
        while(name[j] != '\0'){
            invert[f] = name[j];
            j++;
            f--;
        }
        invert[tam] = '\0'; 

        for( j = tam / 2; j < tam; j++){
            invert[j] -= 1;
        }
        printf("%s\n", invert);
    }

    return 0;
}

