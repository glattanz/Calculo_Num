#include <stdio.h>

float alt(float a, float b, int n){
	
	float h=(b-a)/n;
	
	return h;
	
}

void imprime(float a, int n, float altura){
	
	printf("\ni\txi\t\tf(xi)\t\tci\tc*f(xi)");
	
	int ci=1; 
	float c;
	
	for(int i=0; i<=n; i++){
	
		float fxi=1/a;
		
		if(i==0 || i==n){
			ci=1;
			c=fxi*ci;
			printf("\n%d\t%f\t%f\t%d\t%f", i, a, fxi, ci, c);
			ci++;
		}else{
			ci=2;
			c=fxi*ci;
			printf("\n%d\t%f\t%f\t%d\t%f", i, a, fxi, ci, c);
		}
		
		a=a+altura;
	}
}

int main(){
	
	float a, b;
	int n;
	
	//xi
	printf("Insira o valor inicial:");
	scanf("%f", &a);
	
	printf("Insira o valor final:");
	scanf("%f", &b);
	
	printf("Insira a quantidade de trapézios:");
	scanf("%d", &n);
	
	float altura = alt(a, b, n);
	imprime(a, n, altura);
	
}
