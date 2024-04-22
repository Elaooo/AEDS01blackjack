#ifndef CARTAS_H
#define CARTAS_H

typedef struct {
    int valor;
    char naipe;
} Carta;

void ImprimeCartaSimples(Carta carta);
int valorMao(Carta carta);

#endif // CARTAS_H
