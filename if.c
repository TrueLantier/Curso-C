#include<stdio.h>

int main() {
    int edad;
    printf("Ingrese su edad: ");
    scanf("%d", &edad);

    if (edad >= 18 && edad < 60)
    {
        printf("Usted es mayor de edad.\n");
        printf("Usted es un adulto\n");
    } else if (edad >= 60)
    {
        printf("Usted es un adulto mayor.\n");
    } else
    {
        printf("Usted es menor de edad.\n");
    }    

    return 0;
}