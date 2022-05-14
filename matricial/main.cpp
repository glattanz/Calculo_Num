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
	aloca(matriz, v);
	
	float **diagonal = new float *[v];
	aloca(diagonal, v);
	
	float **superior = new float *[v];
	aloca(superior, v);
	
	float **inferior = new float *[v];
	aloca(inferior, v);
	
	float **inversa = new float *[v];
	aloca(inversa, v);
	
	float **resultante = new float *[v];
	aloca(resultante, v);
	
	preenche_imprime(v, matriz);
	
	d(matriz, diagonal, v);
	
	s(matriz, superior, v);
	
	i(matriz, inferior, v);
	
	inv(diagonal, inversa, v);
	
	printf("\nSoma da superior + inferior\n");
	soma(superior, inferior, resultante, v);
	
	
	return 0;
}

