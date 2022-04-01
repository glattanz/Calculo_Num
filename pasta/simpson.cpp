#include <stdio.h>
#include <math.h>

float aga(float a, float b, int n){
	
	float h=(b-a)/n;
	
	return h;
	
}

void imprime(float a, int n, float h){
	
	printf("\ni\txi\tf(xi)\t\tci\tc*f(xi)");
	
	int ci; 
	float c, total=0;
	
	for(int i=0; i<=n; i++){
	
		//função
		float fxi=(pow(3,exp(a))-5);
		
		float r = i%2;
		
		if(i==0 || i==n){
			ci=1;
			c=fxi*ci;
			printf("\n%d\t%.1f\t%.4f\t%2.2d\t%.4f", i, a, fxi, ci, c);
			ci++;
			total += c;
		}else if(r==0){
			ci=2;
			c=fxi*ci;
			printf("\n%d\t%.1f\t%.4f\t%2.2d\t%.4f", i, a, fxi, ci, c);
			total += c;
		}else{
			ci=4;
			c=fxi*ci;
			printf("\n%d\t%.1f\t%.4f\t%2.2d\t%.4f", i, a, fxi, ci, c);
			total += c;
		}
		
		a=a+h;
	}
	
	printf("\n\nTotal ci * f(xi):  %.6f", total);
	
	float funcao = (h/3)*total;
	
	printf("\n\nTotal da função:  %.6f", funcao);
	
}

int main(){
	
	float a, b;
	int n;
	
	//xi
	printf("Insira o valor inicial:");
	scanf("%f", &a);
	
	printf("Insira o valor final:");
	scanf("%f", &b);
	
	printf("Insira a quantidade de elementos:");
	scanf("%d", &n);
	
	float r = n%2;
	
	while(r!=0){
		printf("Insira um número de elementos par!\n");
		
		printf("Insira a quantidade de elementos:");
		scanf("%d", &n);
		
		r = n%2;
	}
	
	float h = aga(a, b, n);
	imprime(a, n, h);
	
}
