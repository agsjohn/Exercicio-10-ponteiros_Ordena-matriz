#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define L 5
#define C 5
#define MAX 100

void ordenamatriz (int *matrix, int linha, int coluna);
void escrevermatriz (int *matrix, int linha, int coluna);

main() {
  int x, y, m[L][C];
  srand(time(NULL));
  for(x = 0; x < L; x++){
    for(y = 0; y < C; y++){
      m[x][y] = rand() % MAX + 1;
    }
  }
  printf("Matriz gerada:\n");
  escrevermatriz(m, L, C);
  ordenamatriz(m, L, C);
  printf("Matriz ordenada:\n");
  escrevermatriz(m, L, C);
  getchar();
}

void ordenamatriz (int *matrix, int linha, int coluna){
  int x, aux, tam;
  tam = linha * coluna;
  for(x = 0; x < tam - 1; x++){
    if(matrix[x] > matrix[x + 1]){
      aux = matrix[x + 1];
      matrix[x + 1] = matrix[x];
      matrix[x] = aux;
      x = -1;
    }
  }
}

void escrevermatriz (int *matrix, int linha, int coluna){
  int x, y;
  for(x = 0; x < linha; x++){
    for(y = 0; y < coluna; y++){
      if(y == coluna - 1){
        printf("%i\n", matrix[x * linha + y]);
      }
      else{
        printf("%i - ", matrix[x * linha + y]);
      }
    }
  }
}