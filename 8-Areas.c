#include <stdio.h>
#include <string.h>
#include <math.h>

int main() {

double a, b, c;
double area1, area2, area3;

printf ("Digite a medida A: ");
scanf ("%lf", &a);
printf ("Digite a medida B: ");
scanf ("%lf", &b);
printf ("Digite a medida C: ");
scanf ("%lf", &c);

area1 = a * a;
area2 = (a * b)/ 2;
area3 = ((a + b) * c) / 2;


printf ("AREA DO QUADRADO %.3lf\n", area1);
printf ("AREA DO TRIANGULO %.3lf\n", area2);
printf ("AREA DO TRAPEZIO %.3lf\n", area3);


  return 0;
}