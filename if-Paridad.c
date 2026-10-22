#include<stdio.h>

int main() {
    int num;
    printf("Ingrese el número: ");
    scanf("%d", &num);

    if (num % 2 == 0)
    {
        printf("El número es PAR.\n");
    } else
    {
        printf("El número es IMPAR.\n");
    }

    printf("%d\n", num);

    return 0;
}