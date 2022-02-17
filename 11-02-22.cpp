#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

float funcao(float x){

//return (x*log(x))-3.2;
return ((x*x)-9);
		
}

int main(){
	
	setlocale( LC_ALL, "" );
	
float a,b,c,e, med, x, w;
float abs,cont=0,fa,fb, fx, fy=0;
	
	printf ("Informe o valor do limite inferior (A):");
	scanf ("%f",&a);
	printf ("Informe o valor do limite superior (B):");
	scanf ("%f",&b);
	
	
	while(a>=b){
		printf("\n(B) deve ser maior do que (A)\n");
		
		printf ("\nInforme o valor do limite inferior (A):");
		scanf ("%f",&a);
		printf ("\nInforme o valor do limite superior (B):");
		scanf ("%f",&b);
	}
	
	fa=funcao(a);
	fb=funcao(b);
	
	//enquanto fa*fb for positivo
	while((fa*fb)>0){
		printf("\nf(a)*f(b) deve ser negativo\n");
		
		printf ("\nInforme o valor do limite inferior (A):");
		scanf ("%f",&a);
		printf ("\nInforme o valor do limite msuperior (B):");
		scanf ("%f",&b);
	}
	
	while(cont<100){
		printf ("\nInforme o número máximo de interações:\n");
		scanf ("%f",&cont);
		
		if(cont<100){
			printf("\nInsira um valor maior do que 100\n");
		}
	}
	
	while(e>0.1){
		printf ("\nInforme o valor do erro:");
		scanf ("%f",&e);
	}
	
	x=(a+b)/2;
	
	printf("Média: %f", x);
	
	fx=funcao(x);
	
	int i=1;
	
	printf("====================================================");
	printf("\nK\tA\tMédia\tB\tf(a)\tf(med)  f(b)\tf(y)");
	printf("\n%d\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f", i, a, x, b, fa, fx, fb, fy);
	
	for (i=1; i<cont||fabs(fx)<e ; i++){
		fy=(fa*fx);
		if(fy<0){
			b=x;
			fa=funcao(a);
			fb=funcao(b);
			
			//printf("%f\n", fa*fx);
			printf("\n%d\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f", i, a, x, b, fa, fx, fb, fy);
		}
		if(fy>=0){
			a=x;
			fa=funcao(a);
			fb=funcao(b);
			
			//printf("%f\n", fa*fx);
			printf("\n%d\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f", i, a, x, b, fa, fx, fb, fy);
		}
	}
	

}
