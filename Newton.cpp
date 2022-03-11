#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

float funcao(float a){

//resultado da conversão é x se aproximar de 3 para a função ser igual a 0
	return ((a*a)-9);
		
}

float derivada(float a){
	
	return (2*a);
}

/*
float derivadanum(float a, float deltax ){
	
	float dnum =  ( funcao(a + deltax) - funcao (a) )/deltax;
		
	return dnum;
	
}*/

/*void imprime(){
	
	//X k-1 é A e X k é B
	printf("K\tX k-1\tf(X k-1)\tf'(X k-1)\t X k");
	
	for{
		
		
		
	}
	
}*/

/*void calculo(int k, float a, float b){
	
	for(){
		
		
	}
	
}*/

int main(){
	
	int k=1;
	float a, deltax, erro;
	
	setlocale( LC_ALL, "" );
	
	printf ("Informe o primeiro ponto:");
	scanf ("%f",&a);
	
	printf ("Informe o erro:");
	scanf ("%f",&erro);
	
	deltax = 0,0001;
	
	/*
	printf ("Informe o delta x:");
	scanf ("%f",&deltax);*/
	
	float fa=funcao(a);
	//printf("\nfa: %f\n", fa);
	
	printf("K\tX k-1\t\tf(X k-1)\tf'(X k-1)\t X k");
	
	while((fabs(fa))>erro){
	//while(k<5){
	
	fa=funcao(a);
	float da=derivada(a);
	float b=a-(funcao(a)/derivada(a));
	
	//imprime();
	
	printf("\n%d\t%.6f\t%.6f\t%.6f\t%.6f\n", k, a, fa, da, b);
	
	a=b;
	k++;
	
	}
	
	//float dnum = derivadanum(a, deltax);
	//printf("\n%f", dnum);

	//apresentar o x final e o f(x final)
}
