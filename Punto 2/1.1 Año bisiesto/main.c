#include <stdio.h>

int main() {
    
    int año;

    printf("Ingresa un año: ");
    scanf("%d", &año);

    // Condicional que evalúa si el año es divisible entre 4, 100 y 400
    if ((año % 4 == 0 && año % 100 != 0) || (año % 400 == 0)) {
        printf("%d es un año bisiesto.\n", año);
    } else {
        printf("%d no es un año bisiesto.\n", año);
    }

    return 0;
}
