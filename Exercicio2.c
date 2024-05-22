#include <stdio.h>

void main(){
  char palavra[] = "paralelepipedo";

  int tamanho = sizeof(palavra);
  int vogais = 0;

  for(int i = 0; i < tamanho; i++){
    if(palavra[i] == 'a' || palavra[i] == 'e' || palavra[i] == 'i' || palavra[i] == 'o' || palavra[i] == 'u' || palavra[i] == 'A' || palavra[i] == 'E' || palavra[i] == 'I' || palavra[i] == 'O' || palavra[i] == 'U'){
      vogais++;
    }
  }

  printf("A palavra %s tem %d vogais", palavra, vogais);
}