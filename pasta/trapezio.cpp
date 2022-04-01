#include <stdio.h>
#include <math.h>

float alt(float a, float f, int n){
	
	float h=(f-a)/n;
	
	return h;
	
}

void imprime(float a, int n, float altura){
	
	printf("\ni\txi\t\tf(xi)\t\tci\tc*f(xi)");
	
	float soma;
	int ci=1; 
	float c;
	
	for(int i=0; i<=n; i++){
	
		float fxi=(exp(a)-(pow(a, 2)+4));
		
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
		soma = soma + fxi;
	}
	
	printf("\n\nO somatório total de f(x): %.6f", soma);
	printf("\nO resultado final é: %.6f", altura*soma);
}

int main(){
	
	float a, b, f;
	int n;
	
	//xi
	printf("Insira o valor inicial:");
	scanf("%f", &a);
	
	printf("Insira o valor final:");
	scanf("%f", &f);
	
	printf("Insira a quantidade de trapézios:");
	scanf("%d", &n);
	
	float altura = alt(a, f, n);
	imprime(a, n, altura);
	
}
