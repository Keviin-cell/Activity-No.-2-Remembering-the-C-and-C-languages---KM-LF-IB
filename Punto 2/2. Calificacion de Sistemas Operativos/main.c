#include <stdio.h>

#define MAX_ESTUDIANTES 100  // Máximo número de estudiantes que podemos manejar

// Estructura para guardar info de cada estudiante
typedef struct {
    char nombre[50];        // Nombre del estudiante
    int calificaciones[3]; // Tres calificaciones
    float promedio;        // Promedio de las calificaciones
} Estudiante;

// Función para ingresar las calificaciones
void ingresarCalificaciones(Estudiante estudiantes[], int numEstudiantes) {
    for (int i = 0; i < numEstudiantes; i++) {
        // Pedimos el nombre del estudiante
        printf("Ingresa el nombre del estudiante %d: ", i + 1);
        scanf(" %[^\n]", estudiantes[i].nombre);  // Leer nombre completo, incluyendo espacios

        printf("Ingresa las 3 calificaciones de %s:\n", estudiantes[i].nombre);
        int suma = 0;
        for (int j = 0; j < 3; j++) {
            // Pedimos cada calificación
            printf("Calificación %d: ", j + 1);
            scanf("%d", &estudiantes[i].calificaciones[j]);
            suma += estudiantes[i].calificaciones[j];  // Sumamos para el promedio
        }

        // Calculamos el promedio
        estudiantes[i].promedio = (float)suma / 3;
    }
}

// Función para mostrar las calificaciones y promedios
void mostrarCalificaciones(Estudiante estudiantes[], int numEstudiantes) {
    printf("\nResumen de Calificaciones:\n");
    printf("Nombre\t\tCalificaciones\tPromedio\n");
    for (int i = 0; i < numEstudiantes; i++) {
        // Mostramos el nombre del estudiante
        printf("%s\t", estudiantes[i].nombre);
        // Mostramos las calificaciones
        for (int j = 0; j < 3; j++) {
            printf("%d ", estudiantes[i].calificaciones[j]);
        }
        // Mostramos el promedio
        printf("\t%.2f\n", estudiantes[i].promedio);
    }
}

int main() {
    Estudiante estudiantes[MAX_ESTUDIANTES];
    int numEstudiantes;

    // Pedimos el número de estudiantes
    printf("¿Cuántos estudiantes hay? ");
    scanf("%d", &numEstudiantes);

    // Verificamos si el número es válido
    if (numEstudiantes > MAX_ESTUDIANTES) {
        printf("¡Demasiados estudiantes! El máximo es %d.\n", MAX_ESTUDIANTES);
        return 1;  // Salimos del programa con un error
    }

    // Llamamos a la función para ingresar calificaciones
    ingresarCalificaciones(estudiantes, numEstudiantes);
    // Llamamos a la función para mostrar calificaciones
    mostrarCalificaciones(estudiantes, numEstudiantes);

    return 0;
}
