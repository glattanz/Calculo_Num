#include <locale.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "matricial.h"

int main(int argc, char** argv) {
	
	setlocale (LC_ALL, "");
	
	int v = 0;
	
	do{
		v = variaveis();
	}while(v<0);
	
	float **matriz = new float *[v];
	aloca(matriz, v, v);
	
	int l = 1;
	float **b = new float *[v];
	aloca(b, l, v);
	
	float **diagonal = new float *[v];
	aloca(diagonal, v, v);
	
	float **superior = new float *[v];
	aloca(superior, v, v);
	
	float **inferior = new float *[v];
	aloca(inferior, v, v);
	
	float **inversa = new float *[v];
	aloca(inversa, v, v);
	
	float **resultantesoma = new float *[v];
	aloca(resultantesoma, v, v);
	
	float **resultantemulti = new float *[v];
	aloca(resultantemulti, v, v);
	
	float **j = new float *[v];
	aloca(j, v, v);
	
	//float **e = new float *[v];
	//aloca(e, v, v);
	
	preenche_imprime(v, matriz);
	
	//Obtenção de metrizes
	d(matriz, diagonal, v);
	
	s(matriz, superior, v);
	
	i(matriz, inferior, v);
	
	inv(diagonal, inversa, v);
	
	printf("\nSoma da superior + inferior\n");
	soma(superior, inferior, resultantesoma, v);
	
	printf("\nMultiplicação da soma * inversa\n");
	multiplicacao(resultantesoma, inversa, resultantemulti, v, v, v, v);
	
	/*for(int i=0; i<v; i++){
		for(int j=0; j<v; j++){
		
		 	j[i][j] = resultantemulti[i][j];
		 	
		}
	
	}*/
	
	//printf("\nMultiplicação da inversa * b\n");
	//soma(inversa, b, e, v);
	
	
	
	return 0;
}

