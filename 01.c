#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void print(char *frase); // função print

int main( ){

    int tamanhoVetor;
    char string[tamanhoVetor];
    
    printf("Digite o tamanho do vetor: \n");
    scanf("%d", &tamanhoVetor);

    printf("Digite uma palavra: \n");
    scanf("%s", &string);

    print(string);

return 0;

}

void print(char *frase){

        int tamanhoVetor = strlen(frase);
        printf("A frase ' %s ' contem %d caracteres", frase, tamanhoVetor);

}