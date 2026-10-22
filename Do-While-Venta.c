#include<stdio.h>
int main() {
    float ventaCliente, ventaTotal = 0;
    do
    {
        printf("Ingrese la venta: ");
        scanf("%f", &ventaCliente);
        ventaTotal += ventaCliente;
    
    } while (ventaCliente != 0);
    
    printf("La venta total es: %2.f", ventaTotal);

    return 0;
}