#include <stdio.h>

int cuadrado(int num);
void CUADRADO(int *num);
void mostrar_contenido_y_direccion(int *num);
void Invertir(int *a, int *b);
void orden(int *num1, int *num2);

int main()
{
    int numero;
    printf("\nIngrese un numero: ");
    scanf("%d", &numero);

    int resultado = cuadrado(numero);

    printf("\nEl cuadrado del numero ingresado es: %d", resultado);

    CUADRADO(&numero);

    mostrar_contenido_y_direccion(&numero);

    int a, b;
    printf("\nIngrese el valor de a:");
    scanf("%d", &a);
    printf("\nIngrese el valor de b:");
    scanf("%d", &b);
    Invertir(&a, &b);
    printf("\nAhora el valor de a es: %d y el valor de b es %d", a, b);
    orden(&a, &b);
    printf("\nEl valor mas chico es %d y el mas grande %d", a, b);

    return 0;
}

int cuadrado(int num)
{
    return num * num;
}

void CUADRADO(int *num)
{
    *num *= *num;
    printf("\nEl cuadrado del numero ingresado es: %d", *num);
}

void mostrar_contenido_y_direccion(int *num)
{
    printf("\nLa direccion de memoria donde se almacena la variable es: %p", num);
    printf("\nEl contenido de la variable es: %d", *num);
}

void Invertir(int *a, int *b)
{
    int aux = *a;
    *a = *b;
    *b = aux;
}

void orden(int *a, int *b)
{
    if (*a > *b)
    {
        int aux = *b;
        *b = *a;
        *a = aux;
    }
}