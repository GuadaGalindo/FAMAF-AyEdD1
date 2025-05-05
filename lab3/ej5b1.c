#include <stdbool.h> /* biblioteca estandar de booleanos*/
#include <stdio.h>

int main(void){
    int i, x, y;
    printf ("Ingrese un valor para x\n");
    scanf ("%d", &x);
    printf ("Ingrese un valor para y\n");
    scanf ("%d", &y);

    i = 0;
    while (x >= y)
    {
        x = x - y;
        i = i + 1;
    }

    printf ("El resto es: %d\n", x);
    printf ("El cociente es: %d\n", i);
    return 0;
}

/*
σ0 = (x->13), (y->3), (i->0)
σ1 = (x->10), (y->3), (i->1)
σ2 = (x->7), (y->3), (i->2)
σ3 = (x->4), (y->3), (i->3)
σ4 = (x->1), (y->3), (i->4)
*/