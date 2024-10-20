#include <stdio.h>
#include <string.h>

int main() {
    char nombre[100];
    char lenguaje[] = "C.";

    // Pedir el nombre al usuario
    printf("Introduzca su nombre --> ");
    fgets(nombre, 100, stdin);

    // Eliminar el salto de línea que fgets añade al final
    nombre[strcspn(nombre, "\n")] = 0;

    // Mostrar el mensaje
    printf("Hola, %s este programa está hecho en el lenguaje de programación: %s\n", nombre, lenguaje);

    return 0;
}