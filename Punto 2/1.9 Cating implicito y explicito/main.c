#include <stdio.h>

int main() {
    int i = 10;
    float f = 5.5;
    double d;

    // Casting implícito 
    d = f;  // float a double

    // Casting explícito
    f = (float) i;  // int a float

    printf("Casting implícito: %f\n", d);
    printf("Casting explícito: %f\n", f);

    return 0;
}
