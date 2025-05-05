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

void intercambiar (int a[], int tam, int i, int j) {
    int x, y;
    x = a[i];
    y = a[j];
    a[i] = y;
    a[j] = x;
}

int main (void) {
    int x, i, j;

    printf ("Ingrese el tamaño del arreglo:\n");
    scanf ("%d", &x);
    
    int a[x];

    pedirArreglo (a, x);

    assert (x > 0);

    printf ("Ingrese la primera posicion que desea intercambiar:\n");
    scanf ("%d", &i);

    assert (i >= 0 && i < x);

    printf ("Ingrese la segunda posicion que desea intercambiar:\n");
    scanf ("%d", &j);

    assert (j >= 0 && j < x);

    intercambiar (a, x, i, j);
    imprimirArreglo (a, x);
    return 0;
}