#include <stdio.h>

// int main(){
//     int numeros[5] = {10,20,30,40,50}; //Vector de 5 elementos
    
//     //Recorrido del vector usando un for
//     for (int i = 0; i < 5; i++){
//         printf("Elemento en posicion %d: %d\n" , i, numeros[i]);
//     }
//     return 0;
// }

/*
Salida por consola:
Elemento en posicion 0: 10
Elemento en posicion 1: 20
Elemento en posicion 2: 30
Elemento en posicion 3: 40
Elemento en posicion 4: 50
*/

// ORDENAMIENTO CON VECTORES
// BUBBLE SORT 

int main(){
    int numeros [6] = {30,10,50,40,20};
    int n = 6;

    for (int i = 0; i < n-1; i++){
        for (int j = 0; j< n-i-1; j++){
            
            if (numeros[j]> numeros[j+1]){
                int temp = numeros[j];
                numeros[j] = numeros[j+1];
                numeros[j+1] = temp;
            }
        }
    }


    printf("Vector ordenado: ");
    for (int i = 0; i < n; i++){
        printf("%d" , numeros[i]);
    }
    printf("\n");

    return 0;
}