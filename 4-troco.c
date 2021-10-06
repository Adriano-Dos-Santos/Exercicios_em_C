#include <stdio.h>
#include <string.h>


int main() {

  double n, valor, recb, troco;
  double total, dife;

  printf ("Preço unitário do produto: ");
  scanf ("%lf", &valor);
  printf ("Quantidade comprada: ");
  scanf ("%lf", &n);
  printf ("Dinheiro recebido: ");
  scanf ("%lf", &recb);
  
  total = valor * n;
  dife = total - recb;

  if (recb < total) {
    printf ("Faltam: %.2lf\n", dife);

  }
  else if (recb == total) {
    printf ("Pagamento efetuado");
  }

    else if (recb > total) {
      troco = recb - total;
      printf ("Troco = %.2lf", troco);
      
    }
  
  

  return 0;
}