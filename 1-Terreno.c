#include <stdio.h>
#include <string.h>

int Terreno () {
    
    double larg, comp, valm;
    double area, preco;
    
    printf ("Digite a largura do terreno: ");
    scanf ("%lf", &larg);
    printf ("Digite o comprimento do terreno: ");
    scanf ("%lf", &comp);
    printf ("Digite o valor do metro quadrado: ");
    scanf ("%lf", &valm);
    
    area = larg * comp;
    preco = area * valm;
    
    printf ("\n");
    printf ("Area do terreno = %.2lf\n", area);
    printf ("Preco do terreno = %.2lf\n", preco);
  
    return 0;
    
}

