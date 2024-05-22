#include <stdio.h>
#include <string.h>

typedef struct{
    char Nome[70];
    float Salario;
    int Idade;
} Registros;

void Cadastrar(Registros Registros[], int *pos){


  Clear_buffer();
  printf("Entre com o Nome: ");
  fgets(Registros[*pos].Nome, 70, stdin);

  printf("Entre com a Idade: ");
  scanf("%d", &Registros[*pos].Idade);

  printf("Entre com o Salario: ");
  scanf("%f", &Registros[*pos].Salario);

  *pos = *pos + 1;

};

void Listar_Nome(Registros Registros[], int pos){
  char Nome[70];

  Clear_buffer();
  printf("Digite o nome a ser buscado: ");
  fgets(Nome, 70, stdin);

  int i = 0;

  for(i; i < pos; i++){
    if(strcmp(Nome, Registros[i].Nome) == 0){
      printf("Posicao: %d\n", i+1);
      printf("\t Nome: %s\n", Registros[i].Nome);
      printf("\t Idade: %d\n", Registros[i].Idade);
      printf("\t Salario: %f\n", Registros[i].Salario);;
    }
  }

};

void Listar(Registros Registros[], int pos){
  int i = 0;
  for(i; i < pos; i++){
    printf("Posicao: %d", i+1);
    printf("\t Nome: %s\n", Registros[i].Nome);
    printf("\t Idade: %d\n", Registros[i].Idade);
    printf("\t Salario: %f\n", Registros[i].Salario);;
  }
};

void Salvar(Registros Registros[], int pos){
    FILE *f = fopen("Registros", "wb");

    fwrite(Registros, 100, sizeof(Registros), f);

    fwrite(&pos, 1, sizeof(int), f);

    fclose(f);
};

void Carregar(Registros Registros[], int *pos){
    FILE *f = fopen("Registros", "rb");

    fread(Registros, 100, sizeof(Registros), f);

    fread(pos, 1, sizeof(int), f);

    fclose(f);
};

void main(){
  Registros Registros[100];
  int pos = 0;
  int opcao = 0;

  Carregar(Registros, &pos);
  
  do{
    printf("\nMenu Principal\n");
    printf("\n1 - Cadastrar\n");
    printf("\n2 - Listar\n");
    printf("\n3 - Buscar\n");
    printf("\n0 - Sair\n");

    scanf("%d", &opcao);

    if(opcao == 1){
      Cadastrar(Registros, &pos);
    }else if(opcao == 2){
      Listar(Registros, pos);
    }else if(opcao == 3){
      Listar_Nome(Registros, pos);
    }else{
      printf("Encerrando programa!\n");
      Salvar(Registros, pos);
    }
  }while(opcao != 0);
  
};

void Clear_buffer(){
    int c;
    while ((c = getchar()) != '\n' && c != EOF) { }
}
