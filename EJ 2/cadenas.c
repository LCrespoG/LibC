#include "cadenas.h"
#include <string.h>
#include <stdio.h>

//a
char comparacadenas1(){
    printf("a) \n");

    char str1[20];
    char str2[20];

    printf("Introduce tu 1era cadena:");
    scanf("%s",str1);
    printf("Introduce tu 2nda cadena:");
    scanf("%s",str2);

    int comparison = strcmp(str1, str2);

    if (comparison == 0) {
        printf("Las cadenas son iguales.\n\n");
    } else {
        printf("Las cadenas son diferentes.\n\n");
    }

}

//b
int calcularlongitud() {
    printf("b) \n");

    char str[100];
    printf("Introduce cadena para determinar longitud:");
    scanf("%s",str);

    int length = strlen(str);

    printf("La longitud de '%s' es: %d\n", str, length);

    return 0;
}