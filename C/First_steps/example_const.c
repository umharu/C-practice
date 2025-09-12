#include <stdio.h>

int main(){
    const int MAX_INTENTOS = 3; // ocupa memoria en ejecucion - buena practica para const numericos o texto - 
    for(int i=0; i<MAX_INTENTOS; i++){
        printf("intento %d\n" , i+1);
    }
    return 0;
}

