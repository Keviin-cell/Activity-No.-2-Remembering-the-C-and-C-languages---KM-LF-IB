#include <stdio.h>
#include <ctype.h> 

// Función para verificar si una letra está en mayúscula con la libreria 'isupper'
int esMayuscula(char letra) {
    return isupper(letra);
}

int main() {
    char letra;

    printf("Ingresa una letra: ");
    scanf(" %c", &letra);

    if (esMayuscula(letra)) {
        printf("%c es una letra mayúscula.\n", letra);
    } else {
        printf("%c no es una letra mayúscula.\n", letra);
    }

    return 0;
}
