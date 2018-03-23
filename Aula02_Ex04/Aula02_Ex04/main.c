//
//  main.c
//  Aula02_Ex04
//
//  Created by Fernando Salles Claro on 23/03/2018.
//  Copyright © 2018 Fernando Salles Claro. All rights reserved.
//

#include <stdio.h>

// Prototipação da função localiza
int localiza(int vetor[], int x, int n);


/**
 * Programa principal
 */
int main(int argc, const char * argv[]) {
    
    // Utilizada para determinar a quantidade de elementos
    // do vetor V
    int N=0;
    
    // Faz um laço obrigando o usuário digitar um valor
    // para N >= 1
    while (N < 1) {
        // Pede o valor de N para o usuário
        printf("Entre com o valor de N: ");
        scanf("%d", &N);
        
        // Se não for um valor válido ...
        if (N < 1)
            printf("Valor inválido\n");
    }

    // Declara o vetor com N elementos
    int V[N];
    
    // Utilizado para determinar a posição dentro do vetor
    int i;
    
    // Solicita os valores para V
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

    // Encerra o programa
    return 0;
}

/*
 * função localiza - Conta a quantidade de um determinado
 *                   valor dentro do vetor
 *
 * Parâmetros de entrada
 * - int vetor[] - vetor de elementos a ser testado
 * - int x - valor que será localizado no vetor
 * - int n - quantidade de elementos do vetor
 *
 * Parâmetros de saída
 * - QTD - quantidade de valores x encontrados em vetor
 *
 */
int localiza(int vetor[], int x, int n) {
    int i, QTD=0;

    // Localiza e conta a quantidade de vezes de X
    // existe no vetor V
    for(i=0;i<n;i++) {
        if (vetor[i] == x) {
            QTD += 1;
        }
    }
    return QTD;
}
