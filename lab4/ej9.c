#include <stdio.h>
#include <stdbool.h> /* biblioteca estandar de booleanos*/
#include <assert.h>
#include <limits.h>
#define N 4

void pedirArreglo (int a[], int n_max) {
    int i;
    i = 0;
    while (i < n_max) {
        printf ("Ingrese el valor para la posicion %d del arreglo\n", i);
        scanf ("%d", &a[i]);
        i = i + 1;
    }
}

int minimo_pares (int a[], int tam) {
    int i, minp;
    i= 0;
    minp = INT_MAX;
    while (i < tam) {
        if (a[i] % 2 == 0 && minp > a[i]) {
            minp = a[i];
        }
        i = i + 1;
    }
    return minp;
}

int minimo_impares (int a[], int tam) {
    int i, minp;
    i= 0;
    minp = INT_MAX;
    while (i < tam) {
        if (a[i] % 2 != 0 && minp > a[i]) {
            minp = a[i];
        }
        i = i + 1;
    }
    return minp;
}

int main (void) {
    int i, r;
    int a[N];

    pedirArreglo (a, N);

    i = minimo_impares (a, N);
    r = minimo_pares (a, N);

    printf ("El minimo elemento par ingresado fue: %d\n", r);
    printf ("El minimo elemento impar ingresado fue: %d\n", i);
    return 0;
}