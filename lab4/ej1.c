#include <stdio.h>
#include <stdbool.h> /* biblioteca estandar de booleanos*/
#include <assert.h>

int pedirEntero (char c) {
    int x;
    printf ("Ingrese un valor para %c\n", c);
    scanf ("%d", &x);
    return x;
}

void holaHasta (int n) {
    while (n > 0) {
        printf ("Hola\n");
        n = n - 1;
    }
}

int main (void) {
    int x = pedirEntero ('x');
    assert (x > 0);
    holaHasta (x);
    return 0;
}