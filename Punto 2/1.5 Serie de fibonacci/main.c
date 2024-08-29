#include <stdio.h>

// SERIE DE FIBONACCI
int main() {
    int n;

    printf("Ingresa el número de términos de la serie de Fibonacci: ");
    scanf("%d", &n);

    int a = 0, b = 1, siguiente;

    printf("Serie de Fibonacci hasta %d términos:\n", n);

    // Ciclo donde se ejecuta la serie
    for (int i = 1; i <= n; i++) {
        printf("%d ", a);
        siguiente = a + b;
        a = b;
        b = siguiente;
    }

    printf("\n");

    return 0;
}
