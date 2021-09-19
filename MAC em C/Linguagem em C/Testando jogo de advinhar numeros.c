#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main() {
  int palpite;
  int senha = 8, 6, 7, 9;
  int tent = 1;
  int i;
  int c = 3, k = 4;
  char s = 't';

  printf("Entre com a senha de %d digitos (0 para valor aleatorio): ", k);
scanf("%d",&senha);
if (senha == 0) {
 srand(time(NULL));
 for (i=0; i<k; i++)
 senha = senha*10 + (rand() % c + 1);
}
/*
  srand(time(NULL));
  palpite = rand() % 100 + 1;

  printf("\n_____________________________________________________________________________");
  printf("\n                   ESTOU PENSANDO EM UM NÚMERO DE 1 a 100");
  printf("\n                                  ADIVINHE!");
*/
  do {
  printf("\nDigite um número: ");
  scanf("%d", &senha);

    if (senha > palpite) {
      printf("O NÚMERO QUE ESTOU PENSANDO É MENOR DO QUE %d", senha);
    }
    else {
      if (senha < palpite)
        printf("O NÚMERO QUE ESTOU PENSANDO É MAIOR DO QUE %d", senha);
      else {
        printf("\nParabens! Voce descobriu a senha em %d tentativas", &tent);
        printf("\n Número de tentativas: %d", tent);
        printf("\nO número era: %d", palpite);
      }
    }

  tent++;
  } while (senha != palpite && tent <= 10);

  if (tent > 10) {
    printf("\n\nVoce ultrapassou o numero de tentativas");
    printf("\nO número era: %d", x);
  }



  return 0;

}
