#include <stdio.h>
#include <string.h>
#include <math.h>

int main() {

double raio, area;

printf ("Digite o valor do rai do circulo: ");
scanf ("%lf", &raio);

area = M_PI * pow(raio, 2);

printf ("Area = %lf", area);
  return 0;
}