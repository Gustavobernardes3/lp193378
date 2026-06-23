/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Gustavo Bernardes dos Santos
Linguagem   : C
Plataforma  : https://judge.beecrowd.com/pt/search
Exercício   : jogo
Data        : 10/06/2026
Objetivo    : fazer jogo sudoku
Aprendizado : funções de validação para sudoku
-------------------------------------------------------------------------- */
#include <iostream>
#include <stdio.h>
using namespace std;
int matriz[9][9];

int valido(int a[9]) {
	int visto[10] = {0};

	for(int i = 0; i < 9; i++) {
		int v = a[i];

		if(v == 0){
			continue;
		}
		if(v < 1 || v > 9 || visto[v]) {
			return 0;
		}

		visto[v] = 1;
	}

	return 1;
}

int validar(int x[9][9], int linha, int coluna) {

    int linha2[9];
    for(int j = 0; j < 9; j++) {
        linha2[j] = x[linha][j];
    }
    if(!valido(linha2)){
        return 0;
	}
    int coluna2[9];
    for(int i = 0; i < 9; i++) {
        coluna2[i] = x[i][coluna];
    }
    if(!valido(coluna2)){
        return 0;
	}
    int bloco[9];
    int r = 0;

    int inicio_linha = (linha / 3) * 3;
    int inicio_coluna = (coluna / 3) * 3;

    for(int i = inicio_linha; i < inicio_linha + 3; i++) {
        for(int j = inicio_coluna; j < inicio_coluna + 3; j++) {
            bloco[r++] = x[i][j];
        }
    }

    if(!valido(bloco)){
        return 0;
	}
    return 1;
}


int main(int argc, char *argv[]) {
	int linha, coluna, valor, ok = 0, legal = 0;

	 if(argc >= 2) {
        FILE *arq = fopen(argv[1], "r");
        if(arq == NULL) {
            cout << "Erro ao abrir o arquivo.\n";
            return 1;
        }
        for(int i = 0; i < 9; i++) {
            for(int j = 0; j < 9; j++) {
                fscanf(arq, "%d", &matriz[i][j]);
            }
        }
        fclose(arq);
    }
    else {
        cout << "Digite a matriz inicial:\n";
        for(int i = 0; i < 9; i++) {
            for(int j = 0; j < 9; j++) {
                cin >> matriz[i][j];
            }
        }
    }

	while(ok == 0) {
        cout << "     S U D O K U\n";
		for(int i = 0; i < 9; i++) {
			for(int j = 0; j < 9; j++) {
				if(matriz[i][j] == 0){
                    cout << "_ ";
                }    
                else{
                    cout << matriz[i][j] << ' ';
                }
                if(j == 2 || j == 5){
                    cout << "| ";
                }
			}
			cout << '\n';
            if(i == 2 || i == 5){
                cout << "_____________________\n\n";
            }
		}
        cout << '\n';
        cout << "Digite a linha: ";
        cin >> linha;
		cout << "Digite a coluna: ";
        cin >> coluna;
		cout << "Digite o valor: ";
        cin >> valor;
        cout << '\n';
		linha--;
		coluna--;
		matriz[linha][coluna] = valor;
		legal = validar(matriz, linha, coluna);

		if (legal) {

            for(int i = 0; i < 9; i++) {
                int linha[9];
                for(int j = 0; j < 9; j++) {
                    linha[j] = matriz[i][j];
                }
                if (!valido(linha)) ok = 0;
            }

            for(int j = 0; j < 9; j++) {
                int coluna[9];
                for(int i = 0; i < 9; i++) {
                    coluna[i] = matriz[i][j];
                }
                if (!valido(coluna)) ok = 0;
            }

            for(int bi = 0; bi < 9; bi += 3) {
                for(int bj = 0; bj < 9; bj += 3) {
                    int bloco[9], r = 0;
                    for(int l = 0; l < 3; l++) {
                        for(int k = 0; k < 3; k++) {
                            bloco[r++] = matriz[l + bi][k + bj];
                        }
                    }
                    if (!valido(bloco)) ok = 0;
                }
            }
			
		}
        int completo = 1;

        for(int i = 0; i < 9; i++) {
	        for(int j = 0; j < 9; j++) {
		        if(matriz[i][j] == 0){
			        completo = 0;
                }
	        }
        }

        if(completo && legal) {
	        ok = 1;
        }
        else if(!legal) {
	        cout << "  TENTE NOVAMENTE :(\n";
	        matriz[linha][coluna] = 0;
        }   

	}
    cout << "     S U D O K U\n";
    for(int i = 0; i < 9; i++) {
			for(int j = 0; j < 9; j++) {
				cout << matriz[i][j] << ' ';
                if(j == 2 || j == 5){
                    cout << "| ";
                }
			}
			cout << '\n';
            if(i == 2 || i == 5){
                cout << "_____________________\n\n";
            }
		}
	cout << "   Y O U  W I N!";
    return 0;
}
