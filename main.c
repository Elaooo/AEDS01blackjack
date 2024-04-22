#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "tadjogador.h"
#include "cartas.h"

int main()
{
    int opt;
    srand(time(NULL));
    char nomePc[10] = "jogador2";
    char nome[100];
    Jogador* ptrJ;
    Carta carta;
    Carta* ptrC;
    Jogador jogador1;
    Jogador jogador2;
    printf("insira o seu nome: ");
    fgets(nome,sizeof(nome),stdin);
    opt = 1;
    jogador1.score = 0;
    do
    {
        ptrJ = &jogador2;
        ptrC = &carta;

        inicializaJogador(nomePc,ptrJ);
        iniciaJogo(ptrJ);

        //printf("mao do pc = %d",jogador2.valorMao);


        ptrJ = &jogador1;
        inicializaJogador(nome,ptrJ);
        iniciaJogo(ptrJ);

        printf("\nmao do player = %d\n",jogador1.valorMao);

        while(opt == 1)
        {
            printf("oq voce deseja?\n1 - comprar carta\n2 - parar\n3 - encerrar\n");
            scanf("%d",&opt);
            if(opt == 1)
            {
                compraCarta(ptrJ);
            }else if(opt == 2)
            {
                if(jogador1.valorMao>jogador2.valorMao)
                {
                    jogador1.score += 1;
                }else if(jogador1.valorMao<jogador2.valorMao)
                {
                    jogador1.score -= 1;
                }
            }
            if(jogador1.valorMao == 21)
            {
                jogador1.score += 10;
                break;
            }
            if(jogador1.valorMao> 21)
            {
                jogador1.score -= 2;
                break;
            }
        }

        printf("\n\nvoce tem %d pontos!\n \n \n",jogador1.score);

    }
    while(opt !=3);



}
