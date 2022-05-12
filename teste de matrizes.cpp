//matricial

#include <locale.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	setlocale (LC_ALL, "");
	int i, j, v, erro;
	
	printf("Insira a quantidade de variáveis:");
	scanf("%d", &v);
	
	//matriz é A
	int matriz[v][v], jota[v][v], d[v][v], inf[v][v], s[v][v], di[v][v], e[v][v], b[v], x[v], aux[v];
	
		
	for(int i=1; i<=(v); i++){
		for(int j=1; j<=(v+1); j++){
			//int e;
			//printf("Insira o valor do elemento [%d][%d]: ", i,j);
			//scanf("%d", e);
			//matriz[i][j] = e;
			if(j<=v){
				if(j>1){
				printf("+\t");
				}
				matriz[i][j] = rand() %10;
				printf("%d \t", matriz[i][j]);
			}else{
				b[j] = rand() %10;
				printf("");
				printf("=\t%d\t", b[j]);
			}
			
		}
	
		printf("\n");
	}
	
	printf("\n-----MATRIZ DIAGONAL-----\n");
	//D
	for(int i=1; i<=v; i++){
		for(int j=1; j<=v; j++){
		
				if(i!=j){
					d[i][j] = 0;
				}else				
				d[i][j] = matriz[i][j];
					
				printf("%d \t", d[i][j]);
			
		}
	
		printf("\n");
	}
	
	printf("\n-----MATRIZ INFERIOR-----\n");
	//I
	for(int i=1; i<=v; i++){
		for(int j=1; j<=v; j++){
		
				if(i<=j){
					inf[i][j] = 0;
				}else				
				inf[i][j] = matriz[i][j];
					
				printf("%d \t", inf[i][j]);
			
		}
	
		printf("\n");
	}
	
	printf("\n-----MATRIZ SUPERIOR-----\n");
	//S
	for(int i=1; i<=v; i++){
		for(int j=1; j<=v; j++){
		
				if(i>=j){
					s[i][j] = 0;
				}else				
				s[i][j] = matriz[i][j];
					
				printf("%d \t", s[i][j]);
			
		}
	
		printf("\n");
	}
	
	//verificar, esta como int, não aparece
	//esse metodo só serve para o metodo matricial 
	printf("\n-----MATRIZ INVERSA-----\n");
	//S
	for(int i=1; i<=v; i++){
		for(int j=1; j<=v; j++){
		
				if(i==j){
					di[i][j] = (1/d[i][j]);
					printf("1/%d \t", d[i][j]);
				}else{
					di[i][j] = 0;
					printf("%d \t", di[i][j]);
				}
		}
	
		printf("\n");
	}
	
	printf("----SOMA DE MATRIZES----");
	for(int i=1; i<=v; i++){
		for(int j=1; j<=v; j++){
			
			int valor = inf[i][j] + s[i][j];
			aux[i][j] = valor;
			printf("%d\t", aux[i][j]);
		}
	
		printf("\n");
	}
	
	
	return 0;
}
