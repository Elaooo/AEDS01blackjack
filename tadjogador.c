#include <stdio.h>
#include <stdlib.h>
#include "tadjogador.h"

#include "cartas.h"

void inicializaJogador(char nome[100], Jogador* jptr)
{
    strcpy(jptr->nJogador,nome);
    jptr->valorMao = 0;

}
void iniciaJogo(Jogador* jptr)
{
    for(int j = 0 ;j !=2;j++)
    {
        compraCarta(jptr);
    }
}
void compraCarta(Jogador* jptr)
{
    static int contador = 0;
    jptr->ultimaCarta.valor = rand() %13 +1;
    char naipes[] = {'C','E','P','O'};
    jptr->ultimaCarta.naipe = naipes[rand() % 4];
    jptr->valorMao += valorMao(jptr->ultimaCarta);
    contador++;
    if(contador> 2)
    {
        imprimeAscii(jptr->ultimaCarta);
        imprimeCartaNormal(jptr->ultimaCarta);
    }

}








































