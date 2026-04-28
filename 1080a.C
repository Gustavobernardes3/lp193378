/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Gustavo Bernardes dos Santos
Linguagem   : C
Plataforma  : https://judge.beecrowd.com/pt/search
Exercício   : https://judge.beecrowd.com/pt/problems/view/1080
Data        : 21/04/2026
Objetivo    : 100 numeros mostrar o maior 
Aprendizado : sem uso de vetores
-------------------------------------------------------------------------- */
#include <stdio.h>

int main()
{
    int x, i, maior, posicao;
    for(i=0; i<100; i++){
        scanf("%d", &x);
      if (x < 0) {
        return 0;
      }
      if(x >  maior){
            maior = x;
            posicao = i + 1;
        }
    }
    }
    printf("%d\n", maior);
    printf("%d\n", posicao);
    return 0;
}
