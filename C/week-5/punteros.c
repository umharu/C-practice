// En esta clase vemos Punteros
// Un puntero es una variable especial que guarda direcciones de memoria.
// Se dice que "apunta a" direccion de memoria, que contiene un valor con tipo especifico de dato, definido previamente   

#include <stdio.h>

int main(){
    int x = 42;
    int *p = &x;

    printf("Valor de x: %d\n", x);
    printf("Direccion de  x (&x): %p\n", &x);
    printf("Direccion guardada de p: %p\n", p);
    
    //Uso * para acceder al valor desde el puntero
    printf("Valor al que apunta p (*p): %d\n", *p);

    //Modifico el valor de x usando el puntero
    *p = 99; //aqui uso * para desreferenciar y asignar un nuevo valor

    printf("Nuevo valor de x: %d\n", x);
    printf("Valor al que apunta (*p): %d\n", *p);

    return 0;

}

/*
Resultado en consola:
Valor de x: 42
Direccion de  x (&x): 0x7ffd5b54a624
Direccion guardada de p: 0x7ffd5b54a624
Valor al que apunta p (*p): 42
Nuevo valor de x: 99
Valor al que apunta (*p): 99
*/
