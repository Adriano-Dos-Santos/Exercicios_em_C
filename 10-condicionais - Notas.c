#include <stdio.h>
#include <string.h>
#include <math.h>

int main() {

double n1, n2, nf;

printf ("Digite a primeira nota: ");
scanf ("%lf", &n1);
printf ("Digite a segunda nota: ");
scanf ("%lf", &n2);

nf = n1 + n2;

if (nf < 60.00) {
  printf("REPROVADO");
}
else if (nf >= 60.00) {
  printf ("APROVADO");
}

  return 0;
}