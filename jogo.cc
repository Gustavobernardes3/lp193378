#include <stdio.h>
int matriz[9][9];

int valido(int a[9]) {
	int visto[10] = {0};

	for(int i = 0; i < 9; i++) {
		int v = a[i];

		if(v == 0)
			continue;

		if(v < 1 || v > 9 || visto[v]) {
			return 0;
		}

		visto[v] = 1;
	}

	return 1;
}

int validar(int x[9][9], int linha, int coluna) {


	int ok = 1;
	int linha2[9];
	for(int j = 0; j < 9; j++) {
		linha2[j] = x[linha][j];
	}
	if (!valido(linha2)) ok = 0;


	int coluna2[9];
	for(int i = 0; i < 9; i++) {
		coluna2[i] = x[i][coluna];
	}
	if (!valido(coluna2)) ok = 0;


	if(linha <= 2 && coluna <= 2) {
		int bloco[9], r = 0;
		for(int l = 0; l < 3; l++) {
			for(int k = 0; k < 3; k++) {
				bloco[r++] = x[l][k];
			}
		}
		if (!valido(bloco)) ok = 0;
	}
	else if(linha <= 2 && coluna >= 2 && coluna <= 5) {
		int bloco[9], r = 0;
		for(int l = 0; l < 3; l++) {
			for(int k = 0; k < 3; k++) {
				bloco[r++] = x[l][k + 3];
			}
		}
		if (!valido(bloco)) ok = 0;
	}
	else if(linha <= 2 && coluna > 5 && coluna <= 8) {
		int bloco[9], r = 0;
		for(int l = 0; l < 3; l++) {
			for(int k = 0; k < 3; k++) {
				bloco[r++] = x[l][k + 6];
			}
		}
		if (!valido(bloco)) ok = 0;
	}
	else if(linha > 2 && linha <= 5 && coluna <= 2) {
		int bloco[9], r = 0;
		for(int l = 0; l < 3; l++) {
			for(int k = 0; k < 3; k++) {
				bloco[r++] = x[l + 3][k];
			}
		}
		if (!valido(bloco)) ok = 0;
	}
	else if(linha > 2 && linha <= 5 && coluna > 2 && coluna <= 5) {
		int bloco[9], r = 0;
		for(int l = 0; l < 3; l++) {
			for(int k = 0; k < 3; k++) {
				bloco[r++] = x[l + 3][k + 3];
			}
		}
		if (!valido(bloco)) ok = 0;
	}
	else if(linha > 2 && linha <= 5 && coluna > 5 && coluna <= 8) {
		int bloco[9], r = 0;
		for(int l = 0; l < 3; l++) {
			for(int k = 0; k < 3; k++) {
				bloco[r++] = x[l + 3][k + 6];
			}
		}
		if (!valido(bloco)) ok = 0;
	}
	else if(linha > 5 && linha <= 8 && coluna <= 2) {
		int bloco[9], r = 0;
		for(int l = 0; l < 3; l++) {
			for(int k = 0; k < 3; k++) {
				bloco[r++] = x[l + 6][k];
			}
		}
		if (!valido(bloco)) ok = 0;
	}
	else if(linha > 5 && linha <= 8 && coluna > 2 && coluna <= 5) {
		int bloco[9], r = 0;
		for(int l = 0; l < 3; l++) {
			for(int k = 0; k < 3; k++) {
				bloco[r++] = x[l + 6][k + 3];
			}
		}
		if (!valido(bloco)) ok = 0;
	}
	else if(linha > 5 && linha <= 8 && coluna > 5 && coluna <= 8) {
		int bloco[9], r = 0;
		for(int l = 0; l < 3; l++) {
			for(int k = 0; k < 3; k++) {
				bloco[r++] = x[l + 6][k + 6];
			}
		}
		if (!valido(bloco)) ok = 0;
	}
    return ok;
}


int main(int argc, char *argv[]) {
	int n, linha, coluna, valor, ok = 0, legal = 0;

	 if(argc >= 2) {
        FILE *arq = fopen(argv[1], "r");
        if(arq == NULL) {
            printf("Erro ao abrir o arquivo.\n");
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
        printf("Digite a matriz inicial:\n");
        for(int i = 0; i < 9; i++) {
            for(int j = 0; j < 9; j++) {
                scanf("%d", &matriz[i][j]);
            }
        }
    }

	while(ok == 0) {
        printf("     S U D O K U\n");
		for(int i = 0; i < 9; i++) {
			for(int j = 0; j < 9; j++) {
				printf("%d ", matriz[i][j]);
                if(j == 2 || j == 5){
                    printf("| ");
                }
			}
			printf("\n");
            if(i == 2 || i == 5){
                printf("_____________________\n");
                printf("\n");
            }
		}
        printf("\n");
		printf("Digite a linha: ");
		scanf("%d", &linha);
		printf("Digite a coluna: ");
		scanf("%d", &coluna);
		printf("Digite o valor: ");
		scanf("%d", &valor);
        printf("\n");
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
	        printf("  TENTE NOVAMENTE :(\n");
	        matriz[linha][coluna] = 0;
        }   

	}
     printf("     S U D O K U\n");
    for(int i = 0; i < 9; i++) {
			for(int j = 0; j < 9; j++) {
				printf("%d ", matriz[i][j]);
                if(j == 2 || j == 5){
                    printf("| ");
                }
			}
			printf("\n");
            if(i == 2 || i == 5){
                printf("_____________________\n");
                printf("\n");
            }
		}
	printf("   Y O U  W I N!");
    return 0;
}
