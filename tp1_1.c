#include <stdio.h>

int main()
{
    /*
    char letra, *pletra;
    pletra = &letra
    */
    char letra= 'A';
    char *pletra = &letra;
    printf("Hola mundo");
    //El contenido del puntero
    printf("\nEl contenido del puntero: %c", *pletra);
    //La direccion de memoria almacenada por el puntero
    printf("\nLa direccion de memoria almacenada por el puntero: %p", pletra);
    //La direccion de memoria de la variable
    printf("\nLa direccion de memoria de la variable: %p", &letra);
    //la direccion de memoria del puntero
    printf("\nLa direccion de memoria del puntero: %p", &pletra);
    //El tamaño de memoria utilizado por esa variable
    printf("\nEl tamaño de memoria utilizado por la variable: %zu bytes", sizeof(letra));

    return 0;
}