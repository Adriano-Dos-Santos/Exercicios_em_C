#include <stdio.h>
#include <string.h>
#include <math.h>


void limpar_entrada() { 
 char c; 
 while ((c = getchar()) != '\n' && c != EOF) {} 
} 

void ler_texto(char *buffer, int length) { 
 fgets(buffer, length, stdin); 
 strtok(buffer, "\n"); 
} 

int main() {

  int n, i, j, contneg;

  printf ("Qual a ordem da matriz(maximo 20)? ");
  scanf ("%d", &n);
  int mat[n][n];


  for (i = 0; i < n; i++){
    for (j = 0; j < n; j++){
      printf ("Elemento [%d,%d]:", i, j);
      scanf ("%d", &mat[i][j]);

    } 
  }

  printf ("DIAGONAL PRINCIPAL: \n");
  for (i = 0; i < n; i++) {

      printf ("%d ", mat[i][i]);

  }
  

  contneg = 0;
  for (i = 0; i < n; i++) {
    for (j = 0; j < n; j++) {

      if (mat[i][j] < 0) {
        contneg = contneg + 1;
      }
    }
  }
  printf ("\n");
  printf ("Quantidade de negativos = %d", contneg);

    return 0;
}
