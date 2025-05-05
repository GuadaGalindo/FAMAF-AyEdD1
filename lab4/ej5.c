#include <stdio.h>
#include <stdbool.h> /* biblioteca estandar de booleanos*/
#include <assert.h>

void pedirArreglo (int a[], int n_max) {
    int i;
    i = 0;
    while (i < n_max) {
        printf ("Ingrese el valor para la posicion %d del arreglo\n", i);
        scanf ("%d", &a[i]);
        i = i + 1;
    }
}

void imprimirArreglo (int a[], int n_max) {
    int i;
    i = 0;
    while (i < n_max) {
        printf ("El valor para la posicion %d del arreglo es: %d\n", i, a[i]);
        i = i + 1;
    }
}

int main (void) {
    int x;
    printf ("Ingrese el tamaño del arreglo:\n");
    scanf ("%d", &x);

    assert (x > 0);

    int a[x];

    pedirArreglo (a, x);
    imprimirArreglo (a, x);
    return 0;
}