#include <locale.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "matricial.h"

int variaveis(){
	
	int v;
	
	printf("Insira a quantidade de variáveis:");
	scanf("%d", &v);
	
	return v;
}

float preenche_imprime(int v, float matriz[v][v]){	
	
	for(int i=1; i<=(v); i++){
		for(int j=1; j<=(v); j++){
			//printf("Insira o valor do elemento [%d][%d]: ", i,j);
			//scanf("%f", &matriz[i][j]);
			matriz[i][j] = rand() %10;
			//printf("%.0f \t", matriz[i][j]);
		}
	
		printf("\n");
	}
	
	return matriz;
}

void diagonal(float ** matriz, int v){
	
	printf("\n-----MATRIZ DIAGONAL-----\n");
	//D
	for(int i=1; i<=v; i++){
		for(int j=1; j<=v; j++){
		
				if(i!=j){
					d[i][j] = 0;
				}else				
				d[i][j] = matriz[i][j];
					
				printf("%d \t", d[i][j]);
			
		}
	
		printf("\n");
	}
}

