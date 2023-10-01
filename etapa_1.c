
//1° etapa do trabalho: programa onde a função main deve chamar 3 funções para
//processar elementos double float em uma array que tem tamanho facilmente alterável

#include <stdio.h>

int main() {

    //Tamanho do vetor (facilmente alterável)
    int tamanho = 6;

    //Vetor de elementos double float
    double meu_vetor[] = {4.0, 9.5, 3.7, 12.2, 23.9, 18.5};

    printf("\n");
    //Chama a função de multiplicação
    multi_vetor(meu_vetor, tamanho);
    printf("\n");

    //Chama a função de divisão
    divide_vetor(meu_vetor, tamanho);
    printf("\n");

    // Chama a função de divisão
    mesmo_vetor(meu_vetor, tamanho);
    printf("\n");

    return 0;
}


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
