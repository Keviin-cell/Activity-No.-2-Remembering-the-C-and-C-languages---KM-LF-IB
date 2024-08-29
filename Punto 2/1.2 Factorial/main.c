#include <stdio.h>

int main() {
    
    // Declaro las variables y la acumuladora 'fact'
    int n, fact = 1;

    printf("Ingresa un número: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        fact = fact * i;
    }

    printf("El factorial de %d es %d.\n", n, fact);

    return 0;
}
