#include <locale.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "matricial.h"

void aloca(float **matriz, int& l, int& c){

	for(int i=0; i < l; i++)
		matriz[i] = new float[c];	
}

int variaveis(){
	
	int v;
	
	printf("Insira a quantidade de variáveis:");
	scanf("%d", &v);
	
	return v;
}

void preenche_imprime(int& v, float **matriz){	
	
	for(int i=0; i<(v); i++){
		for(int j=0; j<(v); j++){
			printf("Insira o valor do elemento [%d][%d]: ", i,j);
			scanf("%f", &matriz[i][j]);
			
			//matriz[i][j] = (rand() %10);
			
			printf("%.0f \t", matriz[i][j]);
		}
	
		printf("\n");
	}
	
}

void d(float **matriz, float **diagonal, int& v){
	
	printf("\n-----MATRIZ DIAGONAL-----\n");
	//D
	for(int i=0; i<v; i++){
		for(int j=0; j<v; j++){
		
				if(i!=j){
					diagonal[i][j] = 0;
				}else				
					diagonal[i][j] = matriz[i][j];
					
				printf("%.0f \t", diagonal[i][j]);
			
		}
	
		printf("\n");
 	}
}

void s(float **matriz, float **superior, int& v){
	
	printf("\n-----MATRIZ SUPERIOR-----\n");
	//S
	for(int i=0; i<v; i++){
		for(int j=0; j<v; j++){
		
				if(i>j){
					superior[i][j] = 0;
				}else				
					superior[i][j] = matriz[i][j];
					
				printf("%.0f \t", superior[i][j]);
			
		}
	
		printf("\n");
 	}
}

void i(float **matriz, float **inferior, int& v){
	
	printf("\n-----MATRIZ INFERIOR-----\n");
	//I
	for(int i=0; i<v; i++){
		for(int j=0; j<v; j++){
		
				if(i<j){
					inferior[i][j] = 0;
				}else				
					inferior[i][j] = matriz[i][j];
					
				printf("%.0f \t", inferior[i][j]);
			
		}
	
		printf("\n");
 	}
}

void inv(float **diagonal, float **inversa, int& v){
	
	printf("\n-----MATRIZ INVERSA-----\n");
	//D-1
	for(int i=0; i<v; i++){
		for(int j=0; j<v; j++){
		
				if(i==j){
					inversa[i][j] = (1/diagonal[i][j]);
					printf("1/%.0f \t", diagonal[i][j]);
				}else{
					inversa[i][j] = 0;
					printf("%.0f \t", inversa[i][j]);
				}
		}
	
	printf("\n");
	
	}
}

void soma(float **matriz1, float **matriz2, float **matriz3, int& v){
	
	printf("----SOMA DE MATRIZES----\n");
	for(int i=0; i<v; i++){
		for(int j=0; j<v; j++){
			
			matriz3[i][j] = matriz1[i][j] + matriz2[i][j];
			
			//printf("%0.f\t", matriz1[i][j]);
			
			printf("%0.f\t", matriz3[i][j]);
		}
		
		/*
		Para deixar arrumadinho rs
		if(i==1){
			printf("\t+\t");
		}
		
		j=0;
		
		for(j=0; j<v; j++){
			
			printf("%0.f\t", matriz2[i][j]);
		}
		
		if(i==1){
			printf("\t=\t");
		}
		
		j=0;
		
		for(j=0; j<v; j++){
			
			printf("%0.f\t", matriz3[i][j]);
		}*/
	
		printf("\n");
	}
}

void multiplicacao(float **matriz1, float **matriz2, float **matriz3, int& lm1, int& cm1, int& cm2, int& lm2){
	
	int aux;
	
	printf("----MULTIPLICAÇÃO DE MATRIZES----\n");
	
	if(cm1 == lm2){
		
		for(int i = 0; i < lm1; i++) {
			for(int j = 0; j < cm2; j++) {
				
				matriz3[i][j] = 0;
				for(int x = 0; x < lm2; x++) {
					aux +=  matriz1[i][x] * matriz2[x][j];
				}
	
				matriz3[i][j] = aux;
				aux = 0;
				
				printf("%0.f\t", matriz3[i][j]);
			}
		
		printf("\n");
		}
	}else
		printf("Insira uma matriz em que o número de colunas da 1º seja igual ao número de linhas da 2º!\n");
	
}
