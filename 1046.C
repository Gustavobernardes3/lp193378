/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Gustavo Bernardes dos Santos
Linguagem   : C
Plataforma  : https://judge.beecrowd.com/pt/search
Exercício   : https://judge.beecrowd.com/pt/problems/view/1046
Data        : 19/05/2026
Objetivo    : calcular tempo de jogo 
Aprendizado : calcular horas e uso de funções
-------------------------------------------------------------------------- */
#include <stdio.h>
int calcularDuracao(int inicio, int fim){
    int duracao = ((fim - inicio + 24) % 24);
    if (duracao == 0){
        return 24;
    }
    return duracao;
} 
int main() {
    int hora1, hora2, duracao;
    scanf("%d %d", &hora1, &hora2);
    duracao = calcularDuracao(hora1, hora2);
    printf("O JOGO DUROU %d HORA(S)\n", duracao);
 
    return 0;
}
