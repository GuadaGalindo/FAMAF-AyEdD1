#include <stdbool.h> /* biblioteca estandar de booleanos*/
#include <stdio.h>

int main(void){
    int i, x, res;
    printf ("Ingrese un valor para x\n");
    scanf ("%d", &x);

    i = 2;
    res = true;
    while ((i < x) && res)
    {
        res = res && ((x % i) != 0);
        i = i + 1;
    }
    
    printf ("El resultado de x es: %d\n", x);
    printf ("El resultado de i es: %d\n", i);
    printf ("El resultado de res es: %d\n", res);
    return 0;
}

/*
σ0 = (x->5), (i->0), (res->False)
σ1 = (x->5), (i->1), (res->True)
σ2 = (x->5), (i->2), (res->True)
σ3 = (x->5), (i->3), (res->True)
σ4 = (x->5), (i->4), (res->True)
σ5 = (x->5), (i->5), (res->Treu)
*/