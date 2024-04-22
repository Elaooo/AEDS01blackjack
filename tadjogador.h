#ifndef tadjogador_h
#define tadjogador_h

#include "cartas.h"

typedef struct
{
    char nJogador[100];
    int score;
    int valorMao;
    Carta ultimaCarta;
} Jogador;

void inicializaJogador(char nome[100], Jogador* ptr);
void iniciaJogo(Jogador* jptr);
void compraCarta(Jogador* jptr);

#endif // tadjogador_h
