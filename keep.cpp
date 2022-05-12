//matricial

#include <locale.h>
#include <stdlib.h>
#include <time.h>

int main(){
	
	setlocale (LC_ALL, "");
	int i, j, v, erro;
	
	printf("Insira a quantidade de variáveis:");
	scanf("%d", &v);
	
	/*printf("Insira a quantidade de linhas da matriz:");
	scanf("%d", &linha);
	
	printf("Insira a quantidade de colunas da matriz:");
	scanf("%d", &coluna);*/
	
	//matriz é A
	int matriz[v][v], j[v][v], d[v][v], i[v][v], s[v][v], di[v][v], e[v][v], b[v], x[v], ;
	
	//preenche e imprime
	for(i=1; i<=(v+1); i++){
		for(j=1; j<=(v+1); j++){
			int e;
			printf("Insira o valor do elemento [%d][%d]: ", i,j);
			scanf("%d", e);
			matriz[i][j] = e;
			printf("%d \t", matriz[i][j]);
			//printf("Insira o coeficiente da posição [%d][%d]:", i, j);
			//scanf("%d", matriz[i][j]);
		}
		printf("\n");
	}
	
	printf("Insira o valor admitido do erro:");
	scanf("%d", &v);
	
	int linha[v], coluna[v], maior[v], var = 1;
	
	//convergencia VERIFICAR
	for(j=1; j<=v; j++){
		maior[var]=0;
		//verificar maior coeficiente de cada coluna (variavel)
		for(i=1; i<=v; i++){
			
			if(matriz[i][j]>maior[var]){
				maior[var]=matriz[i][j];
				linha[var] = i;
				coluna[var] = j;
			}
		}
		printf("Maior é: %d\n", maior[var]);
		var++;
	}
	
	//trocando as equações de posição
	for(j=1; j<=v; j++){
		for(i=1; i<=v; i++){
			var=1;
			if(i==linha[var]&&j==coluna[var]){
			matriz[i][j] = matriz[linha[var]][coluna[var]];
			}
		}
	var++;
	}
	
	//fazer a 
	
	//imprime
	for(i=1; i<=v; i++){
		for(j=1; j<=v; j++){
			printf("%d \t", matriz[i][j]);
		}
		printf("\n");
	}
	
	//tratamento de icognitas
	
	//chute inicial
	int chute[v];
	int x;
	for(x=1; x<=v; x++){
		printf("\nInsira um valor do chute inicial para a %d variável: ", x);
		scanf("%d", &chute[x]);
	}
	
		
}
