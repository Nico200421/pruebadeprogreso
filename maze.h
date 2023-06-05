#ifndef MAZE_H
#define MAZE_H

#define fila 5
#define columna 5

extern int maze[fila][columna];
//aqui llamamos a la funcion que tenemos echo en el maze.c
void printMaze();
int isValidMove(int nuevafila, int nuevacolumna);

#endif 