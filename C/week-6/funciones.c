// Funciones  
// En C todos son funciones  --> Dividir en funciones --> Claro , reutilizable, escalable 
// Una funcion devuelve un valor con return --> Facilita reutilizacion y claridad 

#include <stdio.h>

//Declaro la funcion
int sumar(int a, int b){
    return a + b;
}

int main(){
    int x = 5 , y = 3;
    int resultado = sumar(x , y);

    printf("La suma es %d\n", resultado);
    return 0;
}

// Salida por consola "La suma es igual a 8"
