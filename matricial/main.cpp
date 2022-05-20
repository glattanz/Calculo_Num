#include <locale.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "matricial.h"

int main(int argc, char** argv){
	
	srand(time(NULL));
	setlocale (LC_ALL, "");
	
	int v = 0;
	
	//PEDINDO NUMERO DE VARIAVEIS
	do{
		v = variaveis();
	}while(v<0);
	
	//DECLARAÇÃO DE MATRIZES
	float **matriz = new float *[v];
	aloca(matriz, v, v);
	
	int c = 1;
	float **b = new float *[c];
	aloca(b, v, c);
	
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
	
	float **jota = new float *[v];
	aloca(jota, v, v);
	
	float **xis = new float *[v];
	aloca(xis, v, c);
	
	float **erro = new float *[v];
	aloca(erro, v, v);
	
	//CHAMADA DE FUNCOES
	preenche_imprime(v, matriz, b);
	
		//Obtenção de matrizes
	d(matriz, diagonal, v);
	
	s(matriz, superior, v);
	
	i(matriz, inferior, v);
	
	inv(diagonal, inversa, v);
	
	j(inversa, superior, inferior, jota, v);
	
	chuteinicial(xis, v);
	
	e(erro, v);
	
	//x(jota, xis, erro, v);
	
	int pare=0;
	
	do{
		x(jota, xis, erro, v);
		condicao(xis, erro, matriz, b, v);
		//pare = condicao(xis, erro, matriz, b, v);
		pare++;	
	}
	while(pare <= 10);
	
	return 0;
}



