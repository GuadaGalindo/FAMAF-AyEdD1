#include <stdbool.h> /* biblioteca estandar de booleanos*/
#include <stdio.h>

int main(void){
    int x, y, z, m;
    printf ("Ingrese un valor para x\n");
    scanf ("%d", &x);
    printf ("Ingrese un valor para y\n");
    scanf ("%d", &y);
    printf ("Ingrese un valor para z\n");
    scanf ("%d", &z);
    printf ("Ingrese un valor para m\n");
    scanf ("%d", &m);

    if (x < y) {
        m = x;
    }
    else if (x >= y) {
        m = y;
    } 

    if (m < z) {
        ;
    }
    else if (m >= z) {
        m = z;
    }
        
    printf ("El resultado de x es: %d\n", x);
    printf ("El resultado de y es: %d\n", y);
    printf ("El resultado de z es: %d\n", z);
    printf ("El resultado de m es: %d\n", m);
    return 0;
}

/*
σ0 = (x->5), (y->4), (z->8), (m->0)
σ1 = (x->5), (y->4), (z->8), (m->4)
σ2 = (x->5), (y->4), (z->8), (m->4)

Este programa calcula el mínimo entre 3 valores, x y z. 
Ese es el valor que adopta al final la variable m.
*/