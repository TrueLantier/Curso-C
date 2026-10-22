#include <stdio.h>

int main()
{
    int día;
    printf("Ingrese el número del día: ");
    scanf("%d", &día);
    
    switch (día)
    {
    case 1:
        printf("Hoy es lunes.\n");
        break;
    case 2:
        printf("Hoy es martes.\n");
        break;
    case 3:
        printf("Hoy es miércoles.\n");
        break;
    case 4:
        printf("Hoy es jueves.\n");
        break;
    case 5:
        printf("Hoy es viernes.\n");
        break;
    case 6:
        printf("Hoy es sábado.\n");
        break;
    case 7:
        printf("Hoy es domingo.\n");
        break;
    default:
        printf("Entrada incorrecta.\n");
        break;
    }

    return 0;
}