#include <stdio.h>
#include <stdbool.h> /* biblioteca estandar de booleanos*/
#include <assert.h>

int pedirEntero (char c) {
    int x;
    printf ("Ingrese un valor para %c\n", c);
    scanf ("%d", &x);
    return x;
}

int main (void) {
    int x = pedirEntero ('x');
    int i, x_inicial;

    x_inicial = x;
    i = 0;
    while (x != 0)
    {
        if (x > 0) {
            x = x - 1;
            i = i + 1;
        }
        else {
            x = x + 1;
            i = i + 1;
        }
    }

    assert ((i == x_inicial) || (i == -x_inicial));
    printf ("El valor absoluto es: %d\n", i);
    return 0;
}