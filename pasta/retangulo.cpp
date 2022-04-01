#include <stdio.h>
#include <math.h>

float base(float a, float f, int n){
	
	//base do ret
	float h=(f-a)/n;
	
	return h;
	
}

void imprime(float a, int n, float ba){
	
	printf("\ni\tx\t\txi\t\tf(xi)");
	
	float soma;
	float b=ba;
	
	for(int i=0; i<n; i++){
	
		//float m = (a+b)/2;
		//f(x) = exp(x) - x^2 + 4
		float fxi=(exp(a)-(pow(a, 2)+4));
		
		printf("\n%d\t%f\t%f\t%f", i, a, b, fxi);
				
		a=b;
		b=b+ba;
		soma+=fxi;
	}
	
	printf("\n\nO somatório total de f(x): %.6f", soma);
	printf("\nO resultado final é: %.6f", ba*soma);
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
	
	float ba = base(a, f, n);
	imprime(a, n, ba);
	
}
