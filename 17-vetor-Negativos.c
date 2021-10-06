#include <stdio.h>
#include <string.h>
#include <math.h>

int main() {

  int n, y, i, troca;
  int vet[10];
 
  printf ("Quantos numeros voce vai digitar? ");
  scanf ("%d", &n);
  
  for (i = 0;i < n; i++) {

    printf ("Digite um numero: ");
    scanf ("%d", &vet[i]);
  }
  printf ("NUMEROS NEGATIVOS:\n");
  for (i = 0;i < n; i++) {
    
    if (vet[i] < 0) {
    printf ("%d\n", vet[i]);
    }
  }

    return 0;
}