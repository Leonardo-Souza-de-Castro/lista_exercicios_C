#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int media(int array[], int tamanho){
    int soma = 0;
    for(int i = 0; i < tamanho; i++){
        soma = soma+array[i];
    }

    return soma/tamanho;
}

int comparar(const void* a, const void* b) {
    return (*(int*)a - *(int*)b);
}


int mediana(int* array, int tamanho){
    qsort(array, tamanho, sizeof(int), comparar);

    if (tamanho % 2 == 0) {
        return (array[tamanho / 2 - 1] + array[tamanho / 2]) / 2;
    } else {
        return array[tamanho / 2];
    }
}


void main(){
    int array[] = {1, 2, 2, 3, 4, 4, 4, 5, 5};

    int tamanho = sizeof(array)/sizeof(int);

    int media_array = media(array, tamanho);
    int mediana_array = mediana(array, tamanho);

    printf("A media do array é: %d\n", media_array);
    printf("A mediana do array é: %d\n", mediana_array);
}