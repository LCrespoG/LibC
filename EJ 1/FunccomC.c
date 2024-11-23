#include "FunccomC.h"
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int numeroabsoluto(){
    printf("a) \n");

    int num;

    printf("Elige numero para aplicar valor absoluto:");
    scanf("%d",&num);

    int abs_num = abs(num);

    printf("El valor absoluto de %d es %d \n\n", num, abs_num);
}

int numeroaleatorio(){
    printf("b) \n");

    srand(time(0));

    int random_number = rand();
    printf("Número aleatorio: %d\n\n\n", random_number);
}