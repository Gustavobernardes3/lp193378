/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Gustavo Bernardes dos Santos
Linguagem   : C
Plataforma  : https://judge.beecrowd.com/pt/search
Exercício   : 2758
Data        : 15/04/2026
Objetivo    : Mostrar o mesmo número de diferentes formas
Aprendizado : Uso de %.1f, %.2f, %.3f, %.3E e %.0f
-------------------------------------------------------------------------- */
#include <stdio.h>

int main()
{
    float A, B;
    scanf("%f %f", &A, &B);
    double C, D;
    scanf("%lf %lf", &C, &D);
    
   
    if ( -100000.0 > A || A > 100000.0) {
        return 0;
    }
    if ( -100000.0 > B || B > 100000.0) {
        return 0;
    }
    if ( -100000.0 > C || C > 100000.0) {
        return 0;
    }
    if ( -100000.0 > D || D > 100000.0) {
        return 0;
    }
    
    printf("A = %f, B = %f\nC = %lf, D = %lf\n", A, B, C, D);
    printf("A = %.1f, B = %.1f\nC = %.1lf, D = %.1lf\n", A, B, C, D);
    printf("A = %.2f, B = %.2f\nC = %.2lf, D = %.2lf\n", A, B, C, D);
    printf("A = %.3f, B = %.3f\nC = %.3lf, D = %.3lf\n", A, B, C, D);
    printf("A = %.3E, B = %.3E\nC = %.3E, D = %.3E\n", A, B, C, D);
    printf("A = %.0f, B = %.0f\nC = %.0lf, D = %.0lf\n", A, B, C, D);
}
