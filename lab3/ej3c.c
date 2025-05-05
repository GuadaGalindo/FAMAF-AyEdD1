#include <stdbool.h> /* biblioteca estandar de booleanos*/
#include <stdio.h>

int main(void){
    int x, y;
    printf ("Ingrese un valor para x\n");
    scanf ("%d", &x);
    printf ("Ingrese un valor para y\n");
    scanf ("%d", &y);

    y = y + y;
    x = x + y;

    printf ("El resultado de y es: %d\n", y);
    printf ("El resultado de x es: %d.\n", x);
    return 0;
}

/*
1.b ejecucion 1: σ0 (x->19, y->4), σ1 (x->27, y->8)
1.b ejecucion 2: σ0 (x->-15, y->1), σ1 (x->-13, y->2)
1.b ejecucion 3: σ0 (x->0, y->11), σ1 (x->22, y->22)
*/