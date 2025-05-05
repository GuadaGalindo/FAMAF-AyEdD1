#include <stdio.h>
#include <stdbool.h> /* biblioteca estandar de booleanos*/
#include <assert.h>
#include <limits.h>

typedef struct {
    float maximo;
    float minimo;
    float promedio;
} datos_t;

datos_t stats (float a[], int tam) {
    int i;
    i = 0;

    datos_t total;
    total.minimo = INT_MAX;
    total.maximo = INT_MIN;
    total.promedio = 0;

    while (i < tam) {
        if (total.minimo > a[i]) {
            total.minimo = a[i];
        }
        if (total.maximo < a[i]) {
            total.maximo = a[i];
        }
        total.promedio = total.promedio + a[i];
        i = i + 1;
    }

    total.promedio = total.promedio / tam;
    return total;
}

void pedirArreglo (float a[], int n_max) {
    int i;
    i = 0;

    while (i < n_max) {
        printf ("Ingrese el valor para la posicion %d del arreglo\n", i);
        scanf ("%e", &a[i]);
        i = i + 1;
    }
}

int main (void) {
    int x;

    printf ("Ingrese el tamaño del arreglo:\n");
    scanf ("%d", &x);
    
    float a[x];

    pedirArreglo (a, x);

    assert (x > 0);

    datos_t resultado = stats (a, x);

    printf ("El maximo de arreglo es: %f\n", resultado.maximo);
    printf ("El minimo de arreglo es: %f\n", resultado.minimo);
    printf ("El promedio del arreglo es: %f\n", resultado.promedio);
    return 0;
}