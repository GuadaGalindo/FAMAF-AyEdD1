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

    z_inicial = z;
    x_inicial = x;
    y_inicial = y;

    z = x_inicial;
    x = y_inicial;
    y = z_inicial;

    assert ((z == x_inicial) && (x == y_inicial) && (y == z_inicial));
    printf ("Ahora por el cambio de variable z = %d, x = %d, y = %d\n", x_inicial, y_inicial, z_inicial);
    return 0;
}