#include <stdio.h>
#include <string.h>
#include <math.h>

int main() {

  double base, altura;
  double area, peri, diag;

  //entrada de dados
  printf ("Base do retangulo: ");
  scanf ("%lf", &base);
  printf ("Altura do retangulo: ");
  scanf ("%lf", &altura);

  //processo de dados

  area = base * altura;
  peri = (2*base) + (2 * altura);
  diag = sqrt(pow(base, 2) + pow(altura, 2));

  //saida

  printf ("Area = %.4lf\n", area);
  printf ("Perimetro = %.4lf\n", peri);
  printf ("Diagonal = %.4lf\n", diag);



  return 0;
}