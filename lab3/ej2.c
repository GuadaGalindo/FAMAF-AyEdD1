#include <stdbool.h> /* biblioteca estandar de booleanos*/
#include <stdio.h>

int main(void){
    int x, y, z, b, w;

    printf ("Ingrese un valor para x\n");
    scanf ("%d", &x);

    if (x % 4 == 0) {
        printf ("true\n");
    }
    else {
        printf ("false\n");
    }

    printf ("Ingrese un valor para y\n");
    scanf ("%d", &y);
    printf ("Ingrese un valor para z\n");
    scanf ("%d", &z);

    if (x + y == 0 && y - x == (-1) * z) {
        printf ("true\n");
    }
    else {
        printf ("false\n");
    }

    printf ("Ingrese un valor para b\n");
    scanf ("%d", &b);
    printf ("Ingrese un valor para w\n");
    scanf ("%d", &w);

    if (!b && w) {
        printf ("true\n");
    }
    else {
        printf ("false\n");
    }

    return 0;
}

/*Valores para las variables x=4, y=-4, z=8, b=0, w=1*/


