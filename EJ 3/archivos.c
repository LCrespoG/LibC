#include "Archivos.h"
#include <stdio.h>

int archtxt() {
    printf("a) \n");

    FILE *file = fopen("file.txt", "r");
    if (file == NULL) {
        printf("El archivo no se pudo abrir.\n");
        return 1;
    }

    fclose(file);
}

int archtxt2() {
    printf("b) \n");
    
    FILE *file = fopen("file.txt", "w");
    if (file == NULL) {
        printf("El archivo no se pudo abrir para escritura.\n");
        return 1;
    }

    fprintf(file, "Hola, mundo!\n");

    fclose(file);

    file = fopen("file.txt", "r");
    if (file == NULL) {
        printf("El archivo no se pudo abrir para lectura.\n");
        return 1;
    }

    char buffer[50];
    fscanf(file, "%s", buffer);

    printf("Leído del archivo: %s\n", buffer);

    fclose(file);
}