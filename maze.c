#include "maze.h"
#include <stdio.h>
int maze[5][5] = {
    {0, 1, 0, 0, 0},
    {0, 1, 1, 1, 0},
    {0, 0, 0, 0, 0},
    {1, 1, 1, 1, 0},
    {0, 0, 0, 0, 0}
    };
void printMaze() {
    printf("Laberinto:\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (i == jugadorfila && j == jugadorcolumna) {
                printf("X "); 
            } else if (maze[i][j] == 1) {
                printf("# "); 
            } else {
                printf("  "); 
            }
        }
        printf("\n");
    }
}
int isValidMove(int nuevafila, int nuevacolumna) 
    if(nuevafila < 0 || nuevafila >= 5 || nuevacolumna < 0 || nuevacolumna >= 5) {
        return 0; 
    }
    if (maze[nuevafila][nuevacolumna] == 1) {
        return 0; 
    }
    return 1; 
}