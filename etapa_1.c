
//2° etapa do trabalho: programa onde a função main deve chamar as mesmas 3 funções,
// mas com cada uma em um código diferente, exigindo arquivos header

#include <stdio.h>
#include "funcao1.h"
#include "funcao2.h"
#include "funcao3.h"

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
