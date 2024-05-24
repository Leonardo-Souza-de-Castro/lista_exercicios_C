#include <stdio.h>
#include <string.h>
#include <time.h>

void main(){
    int valor1 = 0;
    int valor2 = 0;
    int soma = 0;


    clock_t inicio = clock();
    printf("Digite o primeiro valor: ");
    scanf("%d", &valor1);
    Clear_buffer();
    printf("Digite o segundo valor: ");
    scanf("%d", &valor2);

    for(int i = 0; i < 15000000000; i++){

        soma = valor1 + valor2;
    }
    clock_t fim = clock();

    printf("Tempo de execução: %f", (double)(fim-inicio)/ CLOCKS_PER_SEC);
}

void Clear_buffer(){
    int c;
    while ((c = getchar()) != '\n' && c != EOF) { }
}