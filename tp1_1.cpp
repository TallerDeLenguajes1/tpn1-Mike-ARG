#include <stdio.h>

int main() {
    int var = 25;
    int *punt;
    punt = &var;

    printf("Contenido del puntero: %d\n", *punt);
    printf("Dirección de memoria almacenada por el puntero: %p\n", punt);
    printf("Dirección de memoria de la variable: %p\n", &var);
    printf("Dirección de memoria del puntero: %p\n", &punt);
    printf("Tamaño de la memoria utilizado por la variable: %d\n", sizeof(var));

    return 0;

}