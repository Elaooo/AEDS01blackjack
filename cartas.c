#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "cartas.h"

void imprimeCartaNormal(Carta carta)
{
    if(carta.valor>10)
    {
        carta.valor = 10;
    }
    printf("valor %d, naipe %c \n",carta.valor,carta.naipe);
}
void imprimeAscii(Carta carta)
{
    if(carta.valor == 1)
    {
        printf("___________\n|A        |\n|         |\n|         |\n|    %C    |\n|         |\n|         |\n|        A|\n-----------\n",carta.naipe);
    }
    else if(carta.valor == 11)
    {
        printf("___________\n|J        |\n|         |\n|         |\n|    %C    |\n|         |\n|         |\n|        J|\n-----------\n",carta.naipe);
    }
    else if(carta.valor == 12)
    {
        printf("___________\n|Q        |\n|         |\n|         |\n|    %C    |\n|         |\n|         |\n|        Q|\n-----------\n",carta.naipe);
    }
    else if(carta.valor == 13)
    {
        printf("___________\n|K        |\n|         |\n|         |\n|    %C    |\n|         |\n|         |\n|        K|\n-----------\n",carta.naipe);
    }
    else if(carta.valor<10)
    {
        printf("___________\n|%d        |\n|         |\n|         |\n|    %C    |\n|         |\n|         |\n|        %d|\n-----------\n",carta.valor,carta.naipe,carta.valor);
    }
    else
    {
        printf("___________\n|%d       |\n|         |\n|         |\n|    %C    |\n|         |\n|         |\n|       %d|\n-----------\n",carta.valor,carta.naipe,carta.valor);
    }
}
int valorMao(Carta carta)
{
    int valor = 0 ;
    if(carta.valor > 10)
    {
        valor += 10;
    }
    else
    {
        valor += carta.valor;
    }
    return valor;
}
