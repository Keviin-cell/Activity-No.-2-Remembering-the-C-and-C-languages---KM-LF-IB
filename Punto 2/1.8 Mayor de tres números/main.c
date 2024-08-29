#include <stdio.h>

int main()
{
    int n1, n2, n3, mayor;
    
    printf("Ingresa tres números:\n");
    scanf("%d %d %d", &n1, &n2, &n3);
    
    if (n1 > n2 && n1 > n3){
        mayor = n1;
    }
    else if (n2 > n1 && n2 > n3){
        mayor = n2;
    }
    else if (n3 > n1 && n3 > n2){
        mayor = n3;
    }
    
    printf("El mayor de los tres números es %d.\n", mayor);

    return 0;
}
