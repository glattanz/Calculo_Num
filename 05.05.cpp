#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>

int main(){
	
	setlocale (LC_ALL, "");
	int linha, i, coluna, j, v;
	
	printf("Insira a quantidade de variáveis:");
	scanf("%d", &v);
	
	/*printf("Insira a quantidade de linhas da matriz:");
	scanf("%d", &linha);
	
	printf("Insira a quantidade de colunas da matriz:");
	scanf("%d", &coluna);*/
	
	int matriz[v][v];
	
	//preenche e imprime
	for(i=1; i<=v; i++){
		for(j=1; j<=v; j++){
			matriz[i][j] = rand() %10;
			printf("%d \t", matriz[i][j]);
			//printf("Insira o coeficiente da posição [%d][%d]:", i, j);
			//scanf("%d", matriz[i][j]);
		}
		printf("\n");
	}
	
	int var = 1;
	int maior[v];
	
	//convergencia VERIFICAR
	for(j=1; j<=v; j++){
		maior[var]=0;
		//verificar maior coeficiente de cada coluna (variavel)
		for(i=1; i<=v; i++){
			
			if(matriz[i][j]>maior[var]){
				maior[var]=matriz[i][j];
			}
		}
		var++;
		printf("Maior é: %d\n", maior[var]);
	}
	
}
