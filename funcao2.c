#include "funcao2.h"
#include <stdio.h>

//Função de divisão dos elementos por 5
void divide_vetor(double array[], int tamanho) {

    for (int i = 0; i < tamanho; i++) {
        array[i] /= 5.0;
    
    }

    printf("Resultado da divisao por 5:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("%.2lf ", array[i]);
    }
    printf("\n");
}
