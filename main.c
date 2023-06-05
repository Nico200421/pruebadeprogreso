#include <stdio.h>
#include "maze.h"
#include "player.h"

void juegoNuevo() {
    int jugadorfila = 0;
    int jugadorcolumna = 0;
    int contador = 0;
    int movrjugador;
    while (1) {
        printMaze();
        printf("Posición actual: (%d, %d)\n", jugadorfila, jugadorcolumna);
        printf("Opciones:\n");
        printf("1. Mover hacia arriba\n");
        printf("2. Mover hacia abajo\n");
        printf("3. Mover hacia la izquierda\n");
        printf("4. Mover hacia la derecha\n"); 
        printf("5. Reiniciar el juego\n");
        printf("6. Salir\n");
        printf("Ingrese su opción: ");
        int opcion;
        scanf("%d", &opcion);
        switch (opcion) {
            case 1:
                moverjugador('w');
                break;
            case 2:
                moverjugador('s');
                break;
            case 3:
                moverjugador('a');
                break;
            case 4:
                moverjugaor('d');
                break;
            case 5:
                return;  
            case 6:
                return;  
            default:
                printf("Opción inválida. Por favor, ingrese un número del 1 al 6.\n");
                break;
        }
        if (hagando()) {
            printf("¡Ganaste!\n");
            printf("Número de movimientos: %d\n", getcontador());
            if (getcotador() <= 8) {
                printf("Eres un Pro!\n");
            } else if (getcontador() <= 15) {
                printf("Eres namekusei\n");
            } else {
                printf("Eres un capo!\n");
            }
            break;
        }

        printf("\n");
    }
}

int main() {
    int opcion;
    while (1) {
        printf("Menú Principal:\n");
        printf("1. Juego Nuevo\n");
        printf("2. Salir\n");
        printf("Ingrese su opción: ");
        scanf("%d", &opcion);

        switch (opcion) {
            case 1:
                juegoNuevo();
                break;
            case 2:
                return 0;  
            default:
                printf("Opción inválida. Por favor, ingrese 1 o 2.\n");
                break;
        }

        printf("\n");
    }

    return 0;
}

