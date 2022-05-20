#include <locale.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include <math.h>
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

void preenche_imprime(int& v, float **matriz, float **b){	
	
	printf("\n============== MATRIZ A ==============\n");
	
	//preenche
	for(int i=0; i<(v); i++){
		for(int j=0; j<(v); j++){
			printf("Insira o valor do elemento [%d][%d]: ", i,j);
			scanf("%f", &matriz[i][j]);
			
			//matriz[i][j] = (rand() %10);
		}
	}
	
	//imprime
	for(int i=0; i<(v); i++){
		for(int j=0; j<(v); j++){
			
			printf("%.0f \t", matriz[i][j]);
		}
	
		printf("\n");
	}
	
	printf("\n============== MATRIZ B ==============\n");
	
	//modelo para preencher matriz coluna Vx1
	//preenche
	for(int i=0; i<(v); i++){
		int j=0;
			printf("Insira o valor do elemento [%d][%d]: ", i,j);
			scanf("%f", &b[i][j]);
			
			//b[i][j] = (rand() %10);
	}
	
	//imprime
	for(int i=0; i<(v); i++){
		int j=0;
			
			printf("%.0f \t", b[i][j]);
	
		printf("\n");
	}
	
}

void d(float **matriz, float **diagonal, int& v){
	
	printf("\n=====MATRIZ DIAGONAL=====\n");
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
	
	printf("\n=====MATRIZ SUPERIOR=====\n");
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
	
	printf("\n=====MATRIZ INFERIOR=====\n");
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
	
	printf("\n=====MATRIZ INVERSA=====\n");
	//D-1
	for(int i=0; i<v; i++){
		for(int j=0; j<v; j++){
		
				if(i==j){
					inversa[i][j] = (1/diagonal[i][j]);
					printf("%.5f \t", inversa[i][j]);
				}else{
					inversa[i][j] = 0;
					printf("%.5f \t", inversa[i][j]);
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
			
			printf("%0.f\t", matriz3[i][j]);
		}
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

void subtracao(float **matriz1, float **matriz2, float **matriz3, int& v){
	
	printf("----SUBTRAÇÃO DE MATRIZES----\n");
	for(int i=0; i<v; i++){
		for(int j=0; j<v; j++){
			
			matriz3[i][j] = matriz1[i][j] - matriz2[i][j];
			
			printf("%0.f\t", matriz3[i][j]);
		}
		printf("\n");
	}
}

void j(float **inversa, float **superior, float **inferior, float **jota, int &v){
	
	float **aux = new float *[v];
	aloca(aux, v, v);
	
	printf("\n=====MATRIZ JOTA=====\n");
	
	soma(superior, inferior, aux, v);
	
	multiplicacao(inversa, aux, jota, v, v, v, v);
	
	//NA FUNCAO DE MULTIPLICACAO JA FAZ O PRINT
	for(int i=0; i<(v); i++){
		for(int j=0; j<(v); j++){
			printf("%.0f \t", jota[i][j]);
		}
	
		printf("\n");
	}
	
	
}

void chuteinicial(float **x, int &v){
	
	float chute;
	
	printf("\n\nInsira o valor do chute inicial: ");
	scanf("%f", &chute);
	
	printf("\n============== CHUTE INICIAL ==============\n");
	
	for(int i=0; i<(v); i++){
		int j=0;

			x[i][j] = chute;
			
			printf("%.0f \t", x[i][j]);
			
		printf("\n");
	}
}

void e(float **erro, int &v){
	
	float errow;
	
	printf("\n\nInsira o valor admitido do erro: ");
	scanf("%f", &errow);
	
	printf("\n============== ERRO ADMITIDO ==============\n");
	
	for(int i=0; i<(v); i++){
		int j=0;
			
			erro[i][j] = errow;
			
			printf("%.5f \t", erro[i][j]);
			
		printf("\n");
	}
}

void x(float **jota, float **xis, float **erro, int& v){
	
	
	float **aux = new float *[v];
	aloca(aux, v, v);
	
	printf("\n=====INTERAÇÃO ( X(k) )=====\n");
	
	multiplicacao(jota, xis, aux, v, v, v, v);
	
	soma(aux, erro, xis, v);
	
	for(int i=0; i<v; i++){
		int j=0;
			
		printf("%.0f \t", xis[i][j]);
		
		printf("\n");
	}
}

int condicao(float **xis, float **erro, float **matriz, float **b, int& v){
	
	float **aux = new float *[v];
	aloca(aux, v, v);
	
	float **e = new float *[v];
	aloca(e, v, v);
	
	int c=1;
	
	printf("\n===== ERRO =====\n");
	
	for(int i=0; i<v; i++){
		int j=0;
			
		//Multiplicação da inversa * b = erro
		multiplicacao(matriz, xis, aux, v, v, c, v);
			
		subtracao(aux, b, e, v);
			
		printf("%.0f \t", e[i][j]);
		
		printf("\n");
	}
	
	int pare = 1;
	
	for (int i=0; i<v; i++)
	{
		int j=0;
		
		if(fabs(e[i][j]) > erro[i][j])
		pare = 0;
	}
	
	return pare;
}
