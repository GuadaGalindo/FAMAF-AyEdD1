#include <stdbool.h> /* biblioteca estandar de booleanos*/
#include <stdio.h>

int main(void){
    int x, y;
    printf ("Ingrese un valor para x\n");
    scanf ("%d", &x);
    printf ("Ingrese un valor para y\n");
    scanf ("%d", &y);

    x = x + y;
    y = y + y;

    printf ("El resultado de x es: %d.\n", x);
    printf ("El resultado de y es: %d", y);
    return 0;
}

/*
1.b ejecucion 1: σ0 (x->3, y->7), σ1 (x->10, y->14)
1.b ejecucion 2: σ0 (x->-2, y->1), σ1 (x->-1, y->2)
1.b ejecucion 3: σ0 (x->5, y->0), σ1 (x->5, y->0)
*/