#include <stdio.h>
#include <string.h>

int inverte_array(int *array[], int tamanho[]){
    int novo_array[tamanho];

    for(int i = 0; i < tamanho; i++){
        novo_array[i] = array[tamanho-1-i];
    }
    
    for(int i = 0; i < tamanho; i++){
        printf("%d", novo_array[i]);
    }
    return novo_array;
}

void main(){
    int tamanho;
    printf("Quantas valores você ira digitar?\n");

    scanf("%d", &tamanho);
    int lista[tamanho];

    for(int i = 0; i < tamanho; i++){
        printf("Digite o %dº valor: ", i+1);
        scanf("%d", &lista[i]);
    }

    int novo = inverte_array(&lista, tamanho);

    for(int i = 0; i < tamanho; i++){
        printf("Posicao: %d\t", i);
        printf("Valor: %d\n", novo[i]);
    }
}

void Clear_buffer(){
    int c;
    while ((c = getchar()) != '\n' && c != EOF) { }
}