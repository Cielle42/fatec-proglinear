//
//  main.c
//  Aula02_Ex04
//
//  Created by Fernando Salles Claro on 23/03/2018.
//  Copyright © 2018 Fernando Salles Claro. All rights reserved.
//

#include <stdio.h>

int localiza(int vetor[], int x, int n);

int main(int argc, const char * argv[]) {
    
    int N=0;
    
    while (N < 1) {
        // Pede o valor de N para o usuário
        printf("Entre com o valor de N: ");
        scanf("%d", &N);
        
        if (N < 1)
            printf("Valor inválido\n");
    }

    // Declara o vetor
    int V[N];
    
    // Utilizado para determinar a posição
    // dentro do vetor
    int i;
    
    // Solicita os valores para N
    for(i=0;i<N;i++) {
        printf("Forneça um valor: ");
        scanf("%d", &V[i]);
    }
    
    // Valor a ser procurado dentro os valores do vetor
    int X;
    int QTD=0;
    printf("Entre com o valor de X: ");
    scanf("%d", &X);
    
    QTD = localiza(V, X, N);
    
    // Imprime o resultado
    if (QTD > 0) {
        printf("O valor %d foi encontrado %d vezes em V\n",X, QTD);
    }
    else {
        printf("O valor %d não foi encontro em V\n", X);
    }
    
    return 0;
}

int localiza(int vetor[], int x, int n) {
    // Localiza e conta a quantidade de vezes de X
    // existe no vetor V
    int i, QTD=0;

    for(i=0;i<n;i++) {
        if (vetor[i] == x) {
            QTD += 1;
        }
    }
    return QTD;
}
