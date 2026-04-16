#include <stdio.h>

void InvertirNumero(int *p) { //En esta funcion se invierte el numero ingresado
    int copia = *p; //Se crea una copia del numero ingresado
    int invertido = 0; //Se crea la variable que almacenará el numero invertido
    while (copia > 0) { //Mientras la copia del numero ingresado sea mayor a cero.
        invertido = (invertido * 10) + (copia % 10); //Se multiplica el numero invertido por 10 y se le suma el resto de dividir el numero ingresado en 10
        copia = copia / 10; //Se divide la copia del numero ingresado en 10
    }
    *p = invertido; //Al numero ingresado se lo reemplaza por el numero invertido
}

void DividirEnDos(int *p) { //Esta funcion divide el numero ingresado en 2
    *p = *p / 2; //Se divide el numero ingresado en 2
}

void SumarResto(int *p) { //En esta funcion, al numero ingresado se le suman los restos de dividirlo en 10, mientras el numero sea mayor a 0
    int copia = *p; //Se crea una copia del numero ingresado
    int suma = 0; //Se crea la variable que almacenará la suma de los restos de dividir el numero ingresado en 10
    while (copia > 0) { //Mientras la copia del numero ingresado sea mayor a cero.
        suma = suma + (copia % 10); //Se suma a la variable suma el resto de dividir la copia del numero ingresado en 10
        copia = copia / 10; //Se divide la copia del numero ingresado en 10
    }
    *p = *p + suma; //Al numero ingresado se le suma la suma total de dividir el numero ingresado en 10
}

void procesar_enigma(int *valor_referencia) {
    InvertirNumero(valor_referencia); //En esta funcion se invierte el numero ingresado.
    DividirEnDos(valor_referencia); //Esta funcion divide el numero invertido en 2.
    SumarResto(valor_referencia); //En esta funcion, al numero ingresado se le suman los restos de dividirlo en 10
}

int main() {
    int dato_secreto = 452;
    
    printf("Iniciando depuracion con el valor: %d\n", dato_secreto);
    
    // Instrucción para el alumno: 
    // Pon un breakpoint aquí (F9) y usa F11 (Step Into) para entrar a cada función.
    procesar_enigma(&dato_secreto);
    
    printf("Resultado final del enigma: %d\n", dato_secreto);
    
    return 0;
}