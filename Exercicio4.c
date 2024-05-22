#include <stdio.h>

void main(){
  int linhas;
  int colunas;
  
  printf("Quantas linhas tem sua matriz: ");
  scanf("%d", &linhas);
  printf("Quantas colunas tem sua matriz: ");
  scanf("%d", &colunas);

  int matriz[linhas][colunas];

  printf("Digite valores para cada elemnto da matriz: \n");

  for(int i = 0; i < linhas; i++){
    for(int j = 0; j < colunas; j++){
      printf ("\nElemento[%d][%d] = ", i, j);
      scanf ("%d", &matriz[ i ][ j ]);
    }
  }

  printf("Sua matriz é: \n");
  for(int i = 0; i < linhas; i++){
    for(int j = 0; j < colunas; j++){
      printf("%d ", matriz[i][j]);
    }
  }
    
  
}
