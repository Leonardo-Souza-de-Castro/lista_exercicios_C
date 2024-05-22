#include <stdio.h>
#include <ctype.h>

void main(){
  char palavra[] = "paralelepipedo";

  char novapalavra[sizeof(palavra)];

  for(int i = 0; i < sizeof(palavra); i++){
    novapalavra[i] = toupper(palavra[i]);
  }

  printf("%s", novapalavra);
}