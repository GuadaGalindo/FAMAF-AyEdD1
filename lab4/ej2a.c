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
    int y = pedirEntero ('y');
    int x_inicial, y_inicial;

    x_inicial = x;
    y_inicial = y;

    assert ((x_inicial == x) && (y_inicial == y));

    x = x + 1;
    y = x_inicial + y;

    assert ((x == x_inicial + 1) && (y == x_inicial + y_inicial));
    printf ("Los nuevos valores de x e y son, x = %d, y = %d\n", x, y);
    return 0;
}