#include <stdio.h>
#include <string.h>
#include <math.h>

int main() {

double dist, gasto, consumo;

printf ("Distancia percorrida: ");
scanf ("%lf", &dist);
printf ("Combustivel gasto: ");
scanf ("%lf", &gasto);

consumo = dist / gasto;

printf ("Consumo médio = %.3lf", consumo);


  return 0;
}