#include <stdio.h>
#include <string.h>
#include <math.h>



int main() {
 
  int m, n, i, j;
  double soma;

  printf ("Qual a quantidade de linhas da matriz? ");
  scanf ("%d", &m);
  printf ("Qual a quantidade de colunas da matriz? ");
  scanf ("%d", &n);

  double mat1[m][n], vet[m];
  
  for  (i = 0; i < m; i++) {
    printf ("Digite os elementos da %da. linha\n", i+1);
    for (j = 0; j < n; j++) {
      scanf ("%lf", &mat1[i][j]);
    }
  }

  //vetor gerado
  soma = 0;
  for (i = 0; i < m; i++) {
    soma = 0;
    for (j = 0; j < n; j++) {
      
      soma = soma + mat1[i][j];
      vet[i] = soma;
    }
  }

  printf ("VETOR GERADO: \n");
  for (i = 0; i < m; i++) {
    printf ("%.1lf\n", vet[i]);
  }


    return 0;
}
