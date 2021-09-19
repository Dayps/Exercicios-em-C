#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
void baralhar(int [][13]);
void dar(int [][13], char *[], char *[]);
int main(void)
{
 system("color F1");//altera a cor de fundo e da fonte em hexadecimal

 printf("\t\t\t\t******************\n\n\n");//Imprime no monitor
 printf("\t\t\t\t$ JOGO DE CARTAS $\n\n\n");//Imprime no monitor
 printf("\t\t\t\t******************\n\n\n\n");//Imprime no monitor
 printf("\t\t\t\tDATA : %s \n\n\n\n\n",__DATE__);//Data
 printf("\t\t\t\tHORA: %s \n\n\n\n\n",__TIME__); //Hora
 printf("\t\t\tSeja Bem-Vindo ao Grande Jogo de Copas \n\n\n\n\n");

/*char *maos[4]= {"Norte", "Sul", "Este", "Oeste"};*/
char *naipe[4] = {"Copas","Ouros","Paus","Espadas"};
char *face[13] = {"A","2","3","4","5","6","7","8","9","10","J","Q","K"};
int baralho[4][13] = {0};
srand(time(NULL));
baralhar(baralho);
dar(baralho,face,naipe);
return 0;
}
// baralhar as cartas

void baralhar(int locBaralho[][13])
{
int ordem, lin, col;
for (ordem = 1; ordem <= 52; ordem++)
   {
       lin = rand() % 4;
       col = rand() % 13;
while (locBaralho[lin][col] != 0)
       {
           lin = rand() % 4;
           col = rand() % 13;
       }
locBaralho[lin][col] = ordem;
   }
}
void dar(int locBaralho[][13], char *locFace[],char *locNaipe[])
{
int ordem, lin, col;
for (ordem = 1; ordem <= 52; ordem++)
for (lin = 0; lin <= 4; lin++)
for (col = 0; col <= 12; col++)
if (locBaralho[lin][col] == ordem)
printf("%3s de %-5s%c", locFace[col], locNaipe[lin],ordem % 4 == 0 ? '\n':'\t');/*indica o espaçamento entre colunas e quantas quero*/
}
