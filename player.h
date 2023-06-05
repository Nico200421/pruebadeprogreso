#ifndef PLAYER_H
#define PLAYER_H


extern int jugadorfila;
extern int jugadorcolumna;
extern int moveCount;
extern int moverjugador;

void jugador(char direction);
int haganado();
int getcontador();
int moverjugador();

#endif 