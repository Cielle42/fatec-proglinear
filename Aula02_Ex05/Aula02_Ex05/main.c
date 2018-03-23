//
//  main.c
//  Aula02_Ex05
//
//  Created by Fernando Salles Claro on 23/03/2018.
//  Copyright © 2018 Fernando Salles Claro. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char * argv[]) {
    int M,  // Nro de linhas da matriz
        N;  // Nro de colunas da matriz
    
    M = N = 100;
    while (M > 50 || N > 50)
    {
        // Pede ao usuário os valores de M e N
        printf("Qtd. de Linhas: ");
        scanf("%d", &M);
        printf("Qtd. de Colunas: ");
        scanf("%d", &N);
        
        if (M > 50 || N > 50)
        {
            printf("\n\nValores impróprios: M,N <= 50\n");
        }
    }
    
    
    int l,  // Controla a coord. linha da matriz
        c;  // Controla a coord. coluna da matriz
    
    int A[M][N];    // Declara a matriz
    int V[M];       // Declara o vetor
    
    // Gera um valor randômico entre 0 e 10 para
    // cada posição da matriz
    for(l=0;l<M;l++) {
        for(c=0;c<N;c++) {
            A[l][c] = rand() % 10;
        }
    }

    // Percorre a matriz verificando a quantidade de
    // zeros que tem em cada linha e armazena o
    // resultado no vetor
    for(l=0;l<M;l++) {
        V[l] = 0;   // Inicializa com ZERO a linha do vetor
        for(c=0;c<N;c++) {
            printf("%d ", A[l][c]);
            if (A[l][c] == 0) {
                V[l] += 1;
                
            }
        }
        printf("\n");
    }
    
    // Imprime os valores do vetor
    for(l=0;l<M;l++) {
        printf("V[%d]: %d\n",l, V[l]);
    }

    return 0;
}
