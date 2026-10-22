#include<stdio.h> // Es lo que permite imprimir en consola.

int main(void) {
    
    printf("Bienvenido\n");

    int num = 1;

    printf("%d\n", num++); // Sale 1
    printf("%d\n", ++num); // Sale 3

    

    return 0;
}