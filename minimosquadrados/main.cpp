#include <locale.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "minimoquad.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	srand(time(NULL));
	setlocale (LC_ALL, "");
	
	int i=1, g, p;
	
	printf("\nInforme o grau da função: ");
	scanf("%d", &g);
	
	printf("\nInforme o número de pontos: ");
	scanf("%d", &p);
	
	int c=1; // pq é vetor
	//Declaração dos vetores
		//Valores de X
		float **x = new float *[p];
		aloca(x, p, c);
		//Valores de f(x)
		float **fx = new float *[p];
		aloca(fx, p, c);
		//Somatorio de X
		float **somax = new float *[p];
		aloca(somax, p, c);
		//Somatorio de f(x)
		float **somafx = new float *[p];
		aloca(somafx, p, c);
			
	printf("\n===========================================\n");
	
	preenche(x, fx, p);
	somatoriox(somax, x, g, p);
	somatoriofx(somafx, fx, x, g, p);
	
	return 0;
}
