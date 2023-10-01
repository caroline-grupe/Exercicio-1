#include "funcao3.h"
#include <stdio.h>

//Função de multiplicação do vetor por ele mesmo
void mesmo_vetor(double array[], int tamanho) {

    for (int i = 0; i < tamanho; i++) {
        array[i] *= array[i];
    
    }

    printf("Resultado da multiplicacao por ele mesmo:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("%.2lf ", array[i]);
    }
    printf("\n");
}
