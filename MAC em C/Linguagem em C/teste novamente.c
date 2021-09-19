#include <stdlib.h>

int main(){
    int num [52], i, j, ai;
    char naipe [52], ac;

    for (i = 0; i < 52; i++) { //inicialização
        num[i] = i / 4 +1;

        switch (i%4) {
            case 0: naipe[i] = 'c';    break; //copas
            case 1: naipe[i] = 'e'; break; //espada
            case 2: naipe[i] = 'o'; break; //ouros
            case 3: naipe[i] = 'p'; break; //paus
        }
    }

    for (i = 0; i < 52; i++) { //embaralhar;

        do {
            j = rand()%52;
        } while (i == j);

        ai = num[i];
        num[i] = num[j];
        num[j] = ai;

        ac = naipe[i];
        naipe[i] = naipe[j];
        naipe[j] = ac;
    }
}
