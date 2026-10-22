#include<stdio.h>
int main() {
    printf("Calcular promedio de estudiantes.\n");
    float nota, promedio = 0;

    for (int i = 1; i <= 5; i++)
    {
        printf("Ingrese la nota: ");
        scanf("%f", &nota);
        promedio += nota;
    }
    promedio = promedio / 5;
    printf("El promedio de notas es: %2.f", promedio);

    return 0;
}