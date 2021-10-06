#include <stdio.h>
#include <string.h>
#include <math.h>

int main() {

  int n, i, cont;
  double vet[50], soma, media;
 
  printf ("Quantos numeros voce vai digitar? ");
  scanf ("%d", &n);
  soma = 0;
  cont = 0;
  for (i = 0;i < n; i++) {

    printf ("Digite um numero: ");
    scanf ("%lf", &vet[i]);
    soma = soma + vet[i];
    cont = cont + 1;
    
  }

  printf ("\n");
  printf ("Valores = ");

  for (i = 0;i < n; i++) {

    printf ("%.1lf ", vet[i]);
  }
  printf ("\n");
  printf ("SOMA = %.1lf\n", soma);
  printf ("MEDIA = %.1lf", (soma/cont));

    return 0;
}
