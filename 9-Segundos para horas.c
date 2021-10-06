#include <stdio.h>
#include <string.h>
#include <math.h>

int main() {

int seg, min, hora;
int seg1, min1, hora1;

printf ("Digite os segundos: ");
scanf ("%d", &seg);
min = 0;
hora = 0;

hora = seg/3600;
min = (seg%3600)/60;
seg1 = seg%60%60;

printf ("%d : %d : %d\n", hora, min, seg1);


  return 0;
}
