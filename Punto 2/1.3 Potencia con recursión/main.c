#include <stdio.h>

// Función recursiva para calcular la potencia
int potencia(int base, int exponente) {
    if (exponente == 0) {
        return 1;
    } else {
        return base * potencia(base, exponente - 1);
    }
}

int main() {
    int base, exponente;

    printf("Ingresa la base: ");
    scanf("%d", &base);
    printf("Ingresa el exponente: ");
    scanf("%d", &exponente);

    printf("%d elevado a %d es %d.\n", base, exponente, potencia(base, exponente));

    return 0;
}
