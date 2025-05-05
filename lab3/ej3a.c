#include <stdbool.h> /* biblioteca estandar de booleanos*/
#include <stdio.h>

int main(void){
    int x;
    printf ("Ingrese un valor para x\n");
    scanf ("%d", &x);

    x = 5;
    
    printf ("El resultado de x es: %d", x);
    return 0;
}

/*
1.a ejecucion 1: σ0 (x->8), σ1 (x->5)
1.a ejecucion 2: σ0 (x->18), σ1 (x->5)
1.a ejecucion 3: σ0 (x->-21), σ1 (x->5)
*/