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
    int m;
    int x = pedirEntero ('x');
    int y = pedirEntero ('y');

    if (x <= y) {
        m = x;
    }
    else {
        m = y;
    }

    assert ((m == x && m <= y) || (m == y && m <= x));
    printf ("El minimo es: %d\n", m);
    return 0;
}