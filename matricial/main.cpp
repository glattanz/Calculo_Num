#include <locale.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "matricial.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	setlocale (LC_ALL, "");
	
	int v = variaveis();
	
	float matriz[v][v];
	
	//preenche_imprime(v, matriz);
	
	for(int i=1; i<=(v); i++){
		for(int j=1; j<=(v); j++){
			//printf("Insira o valor do elemento [%d][%d]: ", i,j);
			//scanf("%f", &matriz[i][j]);
			matriz[i][j] = preenche_imprime(v, matriz);
			printf("%.0f \t", matriz[i][j]);
		}
	
		printf("\n");
	}
	
	//void diagonal(float ** matriz, int v){
	
	return 0;
}
