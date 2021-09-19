#include  <stdio.h>


int main (){

        int num1, num2, soma;

    /* inicio do programa */

    printf ("Entre com dois numeros inteiros: ");
    scanf ("%d d%", &num1, &num2);

    printf ("\n Os numeros lidos foram %d e %d\n", num1, num2);

    soma = num1 + num2;

    printf ("O resultado da soma de %d com %d eh igual a %d\n", num1, num2, soma);

    return 0;
}
