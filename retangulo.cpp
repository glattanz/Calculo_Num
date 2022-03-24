#include <stdio.h>
#include <math.h>

float base(float a, float b, int n){
	
	//base do ret
	float h=(b-a)/n;
	
	return (n*h);
	
}

void imprime(float a, int n, float ba, float b){
	
	printf("\ni\tx\t\txi\t\tm\t\tf(xi)");
	
	for(int i=0; i<n; i++){
	
		float m = (a+b)/2;
		float fxi=(m/(1+pow(m,2)));
		
			printf("\n%d\t%f\t%f\t%f\t%f", i, a, b, m, fxi);
		
		
		
		a=b;
		b=b+ba;
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
	
	float ba = base(a, b, n);
	imprime(a, n, ba, b);
	
}
