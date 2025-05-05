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
    int z = pedirEntero ('z');
    int x_inicial, y_inicial, z_inicial;

    x_inicial = x;
    y_inicial = y;
    z_inicial = z;

    assert ((x_inicial == x) && (y_inicial == y) && (z_inicial == z));

    x = y;
    y = y + x_inicial + z;
    z = x_inicial + y_inicial;

    assert ((x == y_inicial) && (y == y_inicial + x_inicial + z_inicial) && (z == x_inicial + y_inicial));
    printf ("Los nuevos valores de x, y, z son, x = %d, y = %d, z = %d\n", x, y, z);
    return 0;
}