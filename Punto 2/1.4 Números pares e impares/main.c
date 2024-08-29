#include <stdio.h>

int main() {
    int numero;

    printf("Ingresa un número: ");
    scanf("%d", &numero);

    // La condición es si la división deja residuo 0, es par, en otro caso impar
    if (numero % 2 == 0) {
        printf("%d es un número par.\n", numero);
    } else {
        printf("%d es un número impar.\n", numero);
    }

    return 0;
}
