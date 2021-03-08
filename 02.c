#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void impirmir(int posixAnterior , int posixPosterior, int tamanhoVetor);

int main(){

    int posixAnterior , posixPosterior,  tamanhoVetor;

    printf("Digite o priemiro numero da sequencia de fibonacci: \n");
    scanf("%d", &posixAnterior);
    printf("Digite o segundo numero da sequencia de fibonacci: \n");
    scanf("%d", &posixPosterior);
    printf("Digite o tamanho do vetor: \n");
    scanf("%d", &tamanhoVetor);

    printf("\n\n===============================================================\n\n");

    impirmir(posixAnterior , posixPosterior , tamanhoVetor);

    return 0;

}

void impirmir(int posixAnterior , int posixPosterior, int tamanhoVetor){
    //implementando função fibonacci

    int vetorFibonacci[tamanhoVetor];

    vetorFibonacci[0] = posixAnterior;
    vetorFibonacci[1] = posixPosterior;


    for(int i = 2; i < tamanhoVetor; i++ ){
        
        vetorFibonacci[i] = vetorFibonacci[i-1] + vetorFibonacci[i-2];
        printf("%d\n", vetorFibonacci[i]);
    }


}