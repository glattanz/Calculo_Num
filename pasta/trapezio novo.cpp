#include <stdio.h>

float h(float a, float b, int n){
	
	h=(b-a)/n;
	
	return h;
	
}

float funcao(){
	
	fxi=1/xi;
	
	return fxi;
}

void imprime(){
	
	printf("\ni\txi\tf(xi)\tci\tc*f(xi)");
	
	for(int i=0; i<=n; i++){
	
		if(i=0 || i=n){
			ci=1;
			printf("\n%d\t%f\t%f\t%d\tc*f(xi)", i, a, fxi ci);
		}else{
			ci=2;
			printf("\n%d\t%f\t%f\t%d\tc*f(xi)", i, a, fxi ci);
		}
		
		a=a+h;
	}
}

int main(){
	
	float a, b;
	int n;
	
	printf("Insira o valor inicial:");
	scanf("%f", &a);
	
	printf("Insira o valor final:");
	scanf("%f", &b);
	
	printf("Insira a quantidade de trapézios:");
	scanf("%d", &n);
	
	h(a, b, n);
	
	
}
