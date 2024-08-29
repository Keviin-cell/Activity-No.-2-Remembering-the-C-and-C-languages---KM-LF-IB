#include <stdio.h>

int main() {
    
    // Se ponen los ditintos especificadores de formato para imprimir los números en los sistemas
    printf("Número\tOctal\tDecimal\tHexadecimal\n");
    for (int i = 1; i <= 10; i++) {
        printf("%d\t%o\t%d\t%x\n", i, i, i, i);
    }

    return 0;
}
