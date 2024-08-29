#include <stdio.h>
#include <ctype.h>  

// Función para verificar si una letra está en minúscula con la libreria islower
int esMinuscula(char letra) {
    return islower(letra);
}

int main() {
    char letra;

    printf("Ingresa una letra: ");
    scanf(" %c", &letra);

    if (esMinuscula(letra)) {
        printf("%c es una letra minúscula.\n", letra);
    } else {
        printf("%c no es una letra minúscula.\n", letra);
    }

    return 0;
}
