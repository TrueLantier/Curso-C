#include <stdio.h>

int main() {
    float examen1, examen2;

    printf("Ingrese la nota del primer examen: ");
    scanf("%f", &examen1); // Viene con salto de línea.

    printf("Ingrese la nota del segundo examen: ");
    scanf("%f", &examen2);

    float notaFinal = (examen1 + examen2) / 2;
    printf("La nota final del estudiante es: %.2f\n", notaFinal); // Solo lo imprime con 2 decimales.

    return 0;
}