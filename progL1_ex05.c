/* Construir um programa em linguagem C que aloca dinamicamente 
   memória para uma matriz de floats com quantidade de linhas e 
   colunas lidas do usuário. Preencha os elementos da matriz com os 
   valores dos contadores (i+j+0.125). Ao final imprima o conteúdo 
   da matriz usando notação de ponteiros ao invés de colchetes.

   L = 3, C = 2
   
        | 0+0+0.125		0+1+0.125 |   | 0.125	1.125 |
   mat=	| 1+0+0.125		1+1+0.125 | = | 1.125	2.125 |
		| 2+0+0.125		2+1+0.125 |	  | 2.125   3.125 |
		
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
	int L, C;
	int i,j;
	
	printf("Entre com a quantidade de linhas: ");
	scanf("%d",&L);
	
	printf("Entre com a quantidade de colunas: ");
	scanf("%d", &C);

	// Dimensiona a matriz em funcao de L e C
	float **mat;
	mat = (float **) malloc(L * sizeof(float *));
	for(i=0;i<L;i++) {
		mat[i] = (float *) malloc(C*sizeof(float));
	}
	
	// Gera os valores e armazena na matriz
	for(i=0;i<L;i++) {
		for(j=0;j<C;j++) {
			*(*(mat+i)+j) = i+j+0.125;
		}
	}
	
	// Imprime os valores armazenados na matriz
	for(i=0;i<L;i++) {
		for(j=0;j<C;j++) {
			printf("(%d,%d): %3f\t",i,j,*(*(mat+i)+j));
		}
		printf("\n");
	}
	
	return 0;
}
