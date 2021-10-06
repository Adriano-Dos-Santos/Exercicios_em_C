#include <stdio.h>
#include <string.h>
#include <math.h>

void ler_texto(char *buffer, int length) { 
 fgets(buffer, length, stdin); 
 strtok(buffer, "\n"); 
} 

int main() {

double valorh, horas;
char nome[50];

printf ("Nome: ");
ler_texto(nome, 50);
printf ("Valor por hora: ");
scanf ("%lf", &valorh);
printf ("Horas trabalhadas: ");
scanf ("%lf", &horas);

printf ("O pagamento para %s deve ser %.2lf.", nome, (valorh * horas));


  return 0;
}