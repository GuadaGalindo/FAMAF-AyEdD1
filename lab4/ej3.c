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
    int i;
    assert (x >= 0);
    i = (((x + 1)*x)/3);
    printf ("La sumatoria desde 0 hasta %d es: %d\n", x, i);
    return 0;
}