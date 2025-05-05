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

int sumatoria (int a[], int tam) {
    int i, x;
    i = 0;
    x = 0;

    while (i < tam) {
        x = x + a[i];
        i = i + 1;
    }

    printf ("El resultado de la sumatoria de los elementos del arreglo es %d\n", x);
    return x;
}

int main (void) {
    int x;

    printf ("Ingrese el tamaño del arreglo:\n");
    scanf ("%d", &x);

    assert (x > 0);

    int a[x];

    pedirArreglo (a, x);
    sumatoria (a, x);
    return 0;
}