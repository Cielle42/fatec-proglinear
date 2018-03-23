/*
	Escreva um programa principal que lê uma matriz A de dimensão MxN 
	e um vetor V de dimensão N e verifique se o vetor V aparece na 
	matriz A como uma linha. Se isso ocorrer informe a linha da matriz 
	que é igual ao vetor. Caso contrário informe que o vetor não é 
	igual a nenhuma linha da matriz. O programa deve fornecer também 
	como saída a matriz lida e o vetor lido.
	
	M = 3, N = 3
	
		  | 3 0 1 |
	mat = | 4 1 3 |		vet = | 4 1 3 |
		  | 5 2 2 |
		  
	cont = 0
	cont 
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
	int M, N;
	
	// Solicitar as dimensoes
	printf("Entre com a quantidade de linhas: ");
	scanf("%d", &M);
	
	printf("Entre com a quantidade de colunas: ");
	scanf("%d", &N);
	
	// Declarar e solicitar os valores para a
	// matriz e o vetor
	int mat[M][N], vet[N];
	int l, c;
	int cont=0;
	int linha=-1;
	
	// Solicita os valores para a matriz
	for(l=0;l<M;l++) {
		for(c=0;c<N;c++) {
			printf("MAT[%d][%d]= ", l, c);
			scanf("%d", &mat[l][c]);
		}
	}
	
	// Solicita os valores para o vetor
	for(c=0;c<N;c++) {
		printf("VET[%d]= ",c);
		scanf("%d", &vet[c]);
	}
	
	// Verifica se o vetor esta em alguma linha da matriz
	for(l=0;l<M;l++) {
		cont = 0;
		for(c=0;c<N;c++) {
			if (mat[l][c] == vet[c])
				cont= cont + 1;
		}
		if (cont == N)
			linha = l;
	}
	
	// Exibe o resultado do processamento
	if (linha > -1) 
		printf("O vetor foi encontrado na linha %d da matriz\n",linha);
	else
		printf("O vetor nao esta na matriz\n");
	
	return 0;
}