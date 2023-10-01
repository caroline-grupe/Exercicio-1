# Exercicio-1
Primeiro trabalho da disciplina de Técnicas de Desenvolvimento de Software Livre

### Etapa 1 (código: etapa_1.c)

Foi feio uma função principal (main) que chama outras três funções auxiliares que estão definidas no mesmo código, logo abaixo da função principal. Essas funções auxiliares são: multiplica_vetor, divide_vetor e mesmo_vetor; elas fazem operações básicas com um vetor double definido na main, mas com tamanho alterável.

Foi feito commit e push desse código para a branch main.

### Etapa 2 (códigos: etapa_1.c editado , funcao1.c , funcao2.c , funcao3.c , funcao1.h , funcao2.h , funcao3.h , Makefile)

O programa anterior foi editado: o código princiapal (main) que chama as funções auxliares se manteve, mas elas agora estão, cada uma, em um outro programa, sendo necessária a criação de um código header para a declaração das funções.

Foi feito o commit e push de todos os códigos menos os .o e o executável (arquivos criados pela execução do Makefile e que não são necessários para o acompanhar o versionamento dos programas) para a nova branch develop.

### Merge

Por fim, era necessário fazer o merge entre as branch main e develop, para que fosse possível combinar o código da branch main com as alterações feitas na branch develop. Assim, a combinação das branchs ficou registrada na branch main.

#### Obs.: no terminal constou como se o git merge tivesse ocorrido, mas não apareceram as alterações e a combinação na main. Tentei verificar os motivos e tentar outras coisas, mas mesmo assim não deu certo.

