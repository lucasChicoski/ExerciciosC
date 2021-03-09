#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <time.h>

void maiorNumero(int tamanhoVetor);

int main(){

    int vetorSize;

    printf("Escolha a quantidade de numeros: ");
    scanf("%d", &vetorSize);

    maiorNumero(vetorSize);

    return 0;
}

void maiorNumero(int tamanhoVetor){

    int maior = 0, menor = 101, mediana;
    float media , soma = 0;

    srand(time(NULL));

    int vetor[tamanhoVetor];

    for(int i=0;i<tamanhoVetor;i++){
        
        vetor[i] = rand() % 100;
        printf("%d ", vetor[i]);
        soma  = soma + vetor[i];
    }

    printf("\n\n");
    
   for (int j = 1; j < tamanhoVetor; ++j) {
      int x = vetor[j];
      int i;
      for (i = j-1; i >= 0 && vetor[i] > x; --i) 
         vetor[i+1] = vetor[i];
      vetor[i+1] = x;
   }


    for(int i = 0;i< tamanhoVetor; i++){
        printf("%d ",vetor[i]);
    }
    
    printf("\n\n");
    
    mediana = tamanhoVetor % 2;
    int mediana1,mediana2;

    if(mediana == 1){
        int metade = tamanhoVetor / 2;
        mediana1 = vetor[metade];

        printf("\n A mediana eh: %d ", mediana1);
    }else{
        int metade = tamanhoVetor / 2;

        mediana1 = vetor[metade - 1];
        mediana2 = vetor[metade];

        printf("\n A mediana eh: %d , %d ", mediana1, mediana2);
    }

    menor = vetor[0];
    maior = vetor[tamanhoVetor - 1];
    media = soma / tamanhoVetor;

    printf("\n O menor numero eh: %d\n O maior numero eh %d", menor, maior);
    printf("\n A soma dos numeros eh: %.2f", soma);
    printf("\n A media eh: %.2f", media);
    
}