/******************************************************
********                                       ********
********    Exercìcio-Programa 01              ********
********    Professor Alair Pereira do Lago    ********
********    Turma 01                           ********
********                                       ********
******************************************************/

 #include<stdio.h>
 #include<time.h>  #include<stdlib.h>


     int main () {
       int k = 4;
       int c = 3;
       int i = 0;
       int tent = 10;
       int senha = 3321;
       int palpite;
       int p = 1;
       int s = 2;
       int t = 3;
       int q = 3;

       {

       printf("\nOla, vamos iniciar o jogo!\n");

       printf("Entre com o numero de cores: 3\n");
       printf("Entre com o numero maximo de palpite: 10\n");

       }

       printf("\nEntre com a senha de %d digitos (0 para valor aleatorio):", k);
            scanf("%d",&senha);
   if (senha = 3321) {
       srand(time(NULL));
   for (i=0; i<k; i++)
        senha = senha*10 + (rand() % c + 1);
   }

   printf("Digite seu palpite: ", palpite);
   scanf("%d", &palpite);

   if (palpite != senha) {
      printf("%d pinos pretos", senha);}







    /* Testando operação*/
    /*

        if (senha == %d %d %d %d x) {
      printf("%d pino preto", );
    }
    else {
      if (num < x)
        printf("%d pinos preto", num1);

    else {
      if (num < x)
        printf("%d pinos preto", num2);
        }
        else {
      if (num < x)
        printf("%d pinos preto", num1);

    else {
      if (num < x)
        printf("%d pinos preto", num3);
        }

        if (tent > 10) {
    printf("\n\nVOCÊ ULTRAPASSOU O LIMITE DE TENTATIVAS! TENTE OUTRA VEZ!");
    printf("\nO número era: %d", senha);
  }


}


         /*
{
    printf("Entre com a senha de %d digitos (0 para valor aleatorio): ", k);
    printf("Entre com o numero de digitos: 4 \nEntre com o numero de cores: 3\n");
    printf("Vc vai ter o numero maximo de palpites: 10\n");
     }
     scanf()

*/





return 0;

 }
