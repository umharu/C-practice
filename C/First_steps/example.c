#include <stdio.h>
#define MAX_INTENTOS 3 //Por convencion se escribe en mayuscula - Reemplaza el valor antes de compilar - Ocupa memoria en tiempo de ejecucion 

int main(){
    for (int i=0; i<MAX_INTENTOS; i++){
        printf("intento %d\n", i+1);
    }
    return 0;
}
