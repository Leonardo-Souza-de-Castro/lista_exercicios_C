#include <stdio.h>

void main(){
  int tamanho;
  int soma = 0;
  printf("Quantas valores você ira digitar?\n");

  scanf("%d", &tamanho);
  int lista[tamanho];

  for(int i = 0; i < tamanho; i++){
    printf("Digite o %dº valor: ", i+1);
    scanf("%d", &lista[i]);
  }
  
  for(int i = 0; i < tamanho; i++){
    soma = soma + lista[i];
  }

  printf("A soma dos valores digitados é: %d", soma);
}