// Recorrido de una matriz
#include <stdio.h>

/*
int main(){
    int matriz[3][3] = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };

    //Recorrido de la matriz
    for (int fila = 0; fila < 3 ; fila++){
        for (int col = 0; col < 3; col++){
            printf("Elemento [%d][%d]: %d\n", fila, col, matriz[fila][col]);
        }
    }
    return 0;
}


Salida por consola
Elemento [0][0]: 1
Elemento [0][1]: 2
Elemento [0][2]: 3
Elemento [1][0]: 4
Elemento [1][1]: 5
Elemento [1][2]: 6
Elemento [2][0]: 7
Elemento [2][1]: 8
Elemento [2][2]: 9
*/

int main() {
    int numeros[6] = {10,20,30,40,50}; //Vector odenado
    int n = 6;
    int buscar = 20;
    int encontrado = -1; //-1 indica que no se encontro

    //Busqueda lineal
    for (int i = 0; i < n; i++){
        if (numeros[i]== buscar){
            encontrado = i;
            break; // paramos la busqueda
        }
    }
    if (encontrado != -1){
        printf("El numero %d se encuentra en la posicion %d.\n", buscar, encontrado);
    } else {
        printf("El numero %d no se encuentra en el vector.\n", buscar);
    }

    return 0;
}