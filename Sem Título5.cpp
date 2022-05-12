//matricial

#include <locale.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "matricial.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	setlocale (LC_ALL, "");
	int i, j, v, erro;
	
	printf("Insira a quantidade de variáveis:");
	scanf("%d", &v);
	
	//matriz é A
	int matriz[v][v], jota[v][v], d[v][v], inf[v][v], s[v][v], di[v][v], e[v][v], b[v], x[v];
	
	//preenche e imprime
	for(int i=1; i<=(v+1); i++){
		for(int j=1; j<=(v+1); j++){
			int e;
			printf("Insira o valor do elemento [%d][%d]: ", i,j);
			scanf("%d", e);
			matriz[i][j] = e;
			printf("%d \t", matriz[i][j]);
		}
	
		printf("\n");
	}
	
	/*printf("Insira o valor admitido do erro:");
	scanf("%d", &v);*/
	
	//convergencia VERIFICAR
	//convergencia(v, matriz[v][v]);
	
	//tratamento de icognitas
	
	//chute inicial
	/*int chute[v];
	int x;
	for(x=1; x<=v; x++){
		printf("\nInsira um valor do chute inicial para a %dº variável: ", x);
		scanf("%d", &chute[x]);
	}*/
	
	return 0;
}
