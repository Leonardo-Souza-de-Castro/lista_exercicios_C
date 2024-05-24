#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    char Nome[70];
    int Idade;
} Pessoas;

comparar(const void *a, const void *b){
    const Pessoas *pessoaA = (const Pessoas *)a;
    const Pessoas *pessoaB = (const Pessoas *)b;
    return (pessoaA->Idade - pessoaB->Idade);
}

void main(){
    Pessoas pessoa[] = { { "Pessoa1", 21 }, 
           { "Pessoa2", 22 }, 
           { "Pessoa3", 20 },
           { "Pessoa4", 35 } };

    qsort(pessoa, 4, sizeof(Pessoas), comparar);

    printf("Ordenado por idade:\n");
    for (int i = 0; i < 4; i++) {
        printf("Nome: %s, Idade: %d\n", pessoa[i].Nome, pessoa[i].Idade);
    }
}

