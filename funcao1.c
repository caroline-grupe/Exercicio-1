#include "funcao1.h"
#include <stdio.h>

//Funçaõ de multiplicação dos elementos por 3
void multi_vetor(double array[], int tamanho) {

    for (int i = 0; i < tamanho; i++) {
        array[i] *= 3.0;
    
    }

        printf("Resultado da multiplicacao por 3.0:\n");

    for (int i = 0; i < tamanho; i++) {
        printf("%.2lf ", array[i]);
    }
    printf("\n");
    
}
