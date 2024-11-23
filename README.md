# Link al repositorio:

https://github.com/LCrespoG/LibC.git

# Proyecto: Funciones Comunes en C

Este proyecto contiene una serie de ejercicios sobre el uso de funciones comunes en el lenguaje C, que involucran el manejo de números, cadenas y archivos. El objetivo es familiarizarse con las bibliotecas estándar de C, como `<stdlib.h>`, `<string.h>`, y `<stdio.h>`, mediante ejemplos prácticos.

## Estructura del Proyecto

La estructura del proyecto es la siguiente:


- **/src/**: Contiene el archivo fuente principal `main.c`, que incluye todos los ejemplos de los ejercicios.
- **README.md**: Este archivo, donde se explica el propósito del proyecto, el funcionamiento de los programas y la estructura general del código.

## Descripción de los Programas

### 1. Funciones Comunes del Lenguaje C (`<stdlib.h>`)

#### a. Cálculo del valor absoluto con `abs()`

En este ejercicio, el programa utiliza la función `abs()` para calcular el valor absoluto de un número entero. La función `abs()` toma un número como argumento y devuelve su valor absoluto, es decir, convierte cualquier número negativo en positivo y deja los números positivos sin cambios. El programa calcula y muestra el valor absoluto de un número negativo como ejemplo.

#### b. Generación de números aleatorios con `rand()` y `srand()`

Este ejercicio genera un número aleatorio utilizando la función `rand()`. Además, para asegurar que los números generados cambien con cada ejecución del programa, se usa la función `srand()` junto con el tiempo actual (`time(0)`) como semilla para la generación de números aleatorios. Esto garantiza que cada vez que se ejecute el programa, se obtendrá un número aleatorio diferente.

### 2. Cadenas de Caracteres (`<string.h>`)

#### a. Comparación de cadenas con `strcmp()`

En este ejercicio, el programa utiliza la función `strcmp()` para comparar dos cadenas de caracteres. La función `strcmp()` devuelve `0` si las cadenas son iguales, o un valor distinto de `0` si son diferentes. El programa compara dos cadenas y muestra en consola si son iguales o diferentes.

#### b. Cálculo de la longitud de una cadena con `strlen()`

En este caso, el programa utiliza la función `strlen()` para calcular la longitud de una cadena de caracteres. La función `strlen()` devuelve el número de caracteres que componen la cadena (sin contar el carácter nulo al final). El programa muestra la longitud de una cadena de ejemplo.

### 3. Manejo de Archivos (`<stdio.h>`)

#### a. Apertura de un archivo con `fopen()`

Este ejercicio muestra cómo abrir un archivo de texto en modo lectura utilizando la función `fopen()`. Si el archivo no existe o no se puede abrir, el programa muestra un mensaje de error. En este caso, el programa intenta abrir un archivo para lectura y maneja el error en caso de que el archivo no se encuentre.

#### b. Escritura y lectura de un archivo con `fprintf()` y `fscanf()`

En este ejercicio, el programa escribe texto en un archivo usando la función `fprintf()`, y luego lee ese texto con `fscanf()`. Primero, el programa abre un archivo en modo escritura, escribe un mensaje en él y lo cierra. Luego, vuelve a abrir el archivo en modo lectura, lee el contenido y lo muestra en la consola.


## Conclusión

Este proyecto ofrece ejemplos sencillos para aprender a trabajar con funciones comunes en C. A través de estos ejercicios, puedes familiarizarte con el uso de funciones para el manejo de números, cadenas y archivos, todas ellas esenciales en muchos programas en C.
