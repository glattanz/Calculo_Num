#include <locale.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "minimoquad.h"

void aloca(float **matriz, int& l, int& c){

	for(int i=0; i < l; i++)
		matriz[i] = new float[c];	
}

void preenche(float *x, float *fx, int& p){
	
	int i=0;
	
	while(i<=p){
	
		printf("\nInforme o valor do ponto x%d: ", i);
		scanf("%f", &x[i]);
		
		printf("\nInforme o valor do ponto f(x%d): ", i);
		scanf("%f", &fx[i]);
	
		i++;
	}
	
}

void somatoriox(float *somax, float *x, int& grau, int& p){
	
	int i, expoente = 1;
	
	//Percorre os graus
	while(i<=(2*grau))
	{
		//Pecorre todos os pontos e faz a soma deles elevado ao grau 
		while(i<=p){
		somax[i] = pow(x[i], expoente);
		i++;
		}
		
		printf("\nSomatório de x^%d:  %.2f", grau, somax[i]);
	}
	
}

void somatoriofx(float *somafx, float *fx, float *x, int& grau, int& p){
	
	int i, expoente = 0;
	
	//Percorre os graus
	while(i<=(2*grau))
	{
		//Pecorre todos os pontos e faz a soma deles vezes o x elevado ao grau 
		while(i<=p){
		somafx[i] = (fx[i] * pow(x[i], expoente));
		i++;
		}
		
		printf("\nSomatório de fx^%d:  %.2f", grau, somafx[i]);
	}
	
}
