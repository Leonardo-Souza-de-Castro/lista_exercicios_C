#include <stdio.h>
#include <string.h>

typedef struct{
    char Nome[70];
    float Preco;
    int Quantidade;
} Produto;

int Cadastrar(Produto Produtos[], int *pos){
  if(*pos >= 100){
    return 1;
  }

  printf("Entre com o Nome: ");
  fgets(Produtos[*pos].Nome, 70, stdin);
  Clear_buffer();

  printf("Entre com a Quantidade: ");
  scanf("%d", &Produtos[*pos].Quantidade);

  printf("Entre com o Preco: ");
  scanf("%f", &Produtos[*pos].Preco);

  *pos = *pos + 1;

  return 0;
};

int Listar(Produto Produtos[], int pos){
  if (pos == 0){
    return 1;
  }

  int i = 0;

  for(i; i < pos; i++){
    printf("Posicao: %d", i+1);
    printf("\t Nome: %s", Produtos[i].Nome);
    printf("\t Quantidade: %d", Produtos[i].Quantidade);
    printf("\t Preco: %f", Produtos[i].Preco);
    printf("\t Valor total: %f", (Produtos[i].Preco * Produtos[i].Quantidade));
  }

  return 0;
};

void main(){
  Produto Produtos[100];
  int pos = 0;
  int opcao = 0;

  do{
    printf("\nMenu Principal\n");
    printf("\n1 - Cadastrar\n");
    printf("\n2 - Listar\n");
    printf("\n0 - Sair\n");

    scanf("%d", &opcao);

    if(opcao == 1){
      Cadastrar(Produtos, &pos);
    }else if(opcao == 2){
      Listar(Produtos, pos);
    }
  }while(opcao != 0);
  
  
};


void Clear_buffer(){
    int c;
    while ((c = getchar()) != '\n' && c != EOF) { }
}