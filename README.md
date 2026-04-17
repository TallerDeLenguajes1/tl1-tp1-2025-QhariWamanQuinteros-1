# tp1
### comando git clone_
Basicamente se usa para _clonar un repositorio_ remoto en un directorio nuevo
**Uso**:
 git clone <repository-url(url del repositorio)>
Por defecto git crea una nueva carpeta con el nombre del repositorio

### archivo .gitignore
Un archivo gititnore especifica archivos intencionalmente no rastreados que git debería ignorar. Los archivos ya rastreados por git no se ven afectados.
Permite mantener el repositorio limpio y seguro al no permitir que se suban archivos no deseados, los ejecutables, por ejemplo. Se lo debe usar siempre que se trabaje en un repositorio de git. El archivo .gitignore se crea en la carpeta principal del proyecto
 Cada linea es un patron. Se usa # para comentarios y / para directorios

#### codigo_misterio
El codigo invoca en su funcion principal a una funcion que procesa un dato de entrada cargado junto con la funcion principal.
 Esta funcion invocada en _main_ invoca a otras 3 funciones. La primera invierte el numero, la segunda lo divide en 2, y la tercera le suma al  numero resultante la suma de los restos de dividirlo en 10. 
 El pasaje usado por todas las funciones es por referencia (es decir, con aritmetica de punteros) 

#### codigo_sin_funcionar
El programa presentaba errores de sintaxis (falta de punto y coma, falta de inclusion de libreria stdio.h, falta de operador (&) de direccion)
El programa hacia uso de una funcion haciendo pasaje de parametro por valor, eso hacía que al evocar su resultado, este no cambiase. Lo que hice fue cambiar el pasaje por valor a pasaje por referencia. Y ahora cuando se invoca la funcion se le pasa la direccion de memoria de la variable.

##### sobre ejercicio tp1_1.c
Lo que almacena el puntero es la direccion de memoria de la variable (por eso pletra = &letra. En cambio, en el punto 4 lo que se muestra es la direccion de memoria de pletra, en esa direccion de memoria se encuentra almacenada la direccion de memoria de la variable.)