#include<stdio.h>
int main() {
    float peso = 0;
    float altura = 0;
    
    printf("Bienvenido a la calculadora de IMC.\n");
    printf("Ingrese su peso: ");
    scanf("%f", &peso);
    printf("Ingrese su altura: ");
    scanf("%f", &altura);
    
    float imc = peso / (altura*altura);
    printf("Su IMC es: %2.f\n", imc);

    if (imc < 18.5)
    {
        printf("Peso por debajo de lo normal.\n");
    } else if (imc > 18.5 && imc < 25) 
    {
        printf("Peso saludable.\n");
    } else if (imc > 25 && imc < 30)
    {
        printf("Sobrepeso.\n");
    } else {
        printf("Obesidad.\n");
    }
    
    return 0;
}