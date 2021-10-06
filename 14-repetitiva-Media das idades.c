#include <stdio.h>
#include <string.h>
#include <math.h>

int main() {

  int x, soma, cont;
  double media;

  soma = 0;
  cont = 0;

  printf ("Digite as idades: \n");
  scanf ("%d", &x);
  while (x >= 0) {
      soma = soma + x;
      cont = cont + 1;
      scanf ("%d", &x);
  }
  if (cont == 0) {

      printf ("IMPOSSIVEL CALCULAR");
  }

  else {
      media = (double)soma / cont;
      printf ("MEDIA = %.2lf", media);
  }
    return 0;
}
