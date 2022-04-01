#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include <math.h>

int main(){
	setlocale(LC_ALL,"");
	
	float a, b, m, xi, h, f, soma;
	int i, n;
	
	printf("Insira o valor inicial:");
	scanf("%f", &a);
	
	printf("Insira o valor final:");
	scanf("%f", &f);
	
	printf("Insira a quantidade de retângulos:");
	scanf("%d", &n);
	
	printf("\ni \ta \tb \tm \txi\n");
	
	h = (f-a)/n;
	b = b+h;
		
	for(i=0; i<n; i++){
		m = ((b+a)/2);
		xi = (exp(a)-(pow(a, 2)+4));
		printf("%d\t%.1f\t%.1f\t%.2f\t%.4f\n", i, a, b, m, xi);
		a=b;
		b = b+h;
		soma+=xi;
	}
	
	printf("\n\nO somatório total de f(x): %.4f", soma);
	printf("\nO resultado final é: %.4f", h*soma);
}
