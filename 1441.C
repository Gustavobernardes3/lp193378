/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Gustavo Bernardes dos Santos
Linguagem   : C
Plataforma  : https://judge.beecrowd.com/pt/search
Exercício   : https://judge.beecrowd.com/pt/problems/view/1441
Data        : 27/05/2026
Objetivo    : nrealizar sequencia granizo
Aprendizado : uso de função recursiva
-------------------------------------------------------------------------- */
#include <stdio.h>

int maior; 

int gran(int n){
    if(n > maior){
        maior = n;
    }

    if(n == 1){
        return 1;
    }
    
    if(n % 2 != 0){
        return gran(3 * n + 1);
    }
    
    return gran(n / 2);
} 

int main() {
    int h; 
    int i; 
    
    for(i = 1; scanf("%d", &h) && h != 0; i++) {
        maior = h; 
        gran(h); 
        printf("%d\n", maior);
    }
 
    return 0;
}
