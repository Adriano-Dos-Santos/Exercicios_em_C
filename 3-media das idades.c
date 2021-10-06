#include <stdio.h>
#include <string.h>
#include <math.h>

void ler_texto(char *buffer, int length) { 
 fgets(buffer, length, stdin); 
 strtok(buffer, "\n"); 
} 

void limpar_entrada() { 
 char c; 
 while ((c = getchar()) != '\n' && c != EOF) {} 
} 


int main() {

  int idade1, idade2;
  double media;
  char nome1[50], nome2[50];

  printf ("Dados da primeira pessoa: \n");
  printf  ("Nome: ");
  ler_texto(nome1, 50);
  printf ("Idade: ");
  scanf ("%d", &idade1);

  printf ("Dados da segunda pessoa: \n");
  printf  ("Nome: ");
  limpar_entrada ();
  ler_texto(nome2, 50);
  printf ("Idade: ");
  scanf ("%d", &idade2);

  media = ((double)idade1 + idade2) / 2;

  printf ("\n");
  printf ("A idade média de %s e %s é de %.1lf anos", nome1, nome2, media);
  


  return 0;
}