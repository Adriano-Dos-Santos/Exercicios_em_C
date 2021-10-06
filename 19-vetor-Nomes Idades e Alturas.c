#include <stdio.h>
#include <string.h>
#include <math.h>


void limpar_entrada() { 
 char c; 
 while ((c = getchar()) != '\n' && c != EOF) {} 
} 

void ler_texto(char *buffer, int length) { 
 fgets(buffer, length, stdin); 
 strtok(buffer, "\n"); 
} 

int main() {

  int n, i, cont, contp, idade[50];
  double vet[50], soma, media, porcent, altura[50];

  printf ("Quantas pessoas serao digitadas? ");
  scanf ("%d", &n);

  char nomes[n][50];
  soma = 0;
  cont = 0;
  contp = 0;

  for (i = 0;i < n; i++) {

    printf ("Dados da %da pessoa: \n", (i+1));

    printf ("Nome: ");
    limpar_entrada ();
    ler_texto (nomes[i], 50);

    printf ("Idade: ");
    scanf ("%d", &idade[i]);
   
    printf ("Altura: ");
    scanf ("%lf", &altura[i]);
   
    soma = soma + altura[i];
    cont = cont + 1;
    if (idade[i] < 16) {
      contp = contp + 1;
    }

  }

  printf ("\n");
  
  media = soma/cont;
  porcent = (contp * 100) / n;

  printf ("Altura média: %.2lf \n", media);
  printf ("Pessoas com menos de 16 anos:  %.1lf\n", porcent);
  
  for (i=0;i < n; i++) {
    if (idade[i] < 16) {
        printf ("%s\n", nomes[i]);

    }
  }

    return 0;
}
