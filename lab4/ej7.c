#include <stdio.h>
#include <stdbool.h> /* biblioteca estandar de booleanos*/
#include <assert.h>

bool existe_positivo (int a[], int tam) {
    int i;
    bool r;                                                                                                              
    i = 0;
    r = false;

    while (i < tam) {
        if (a[i] <= 0) {
            r = (r || false);
            i = i + 1;
        }
        else {
            r = (r || true);
            i = i +1;
        }
    }
    return r;
}

bool todos_positivos (int a[], int tam) {
    int i;
    bool r;                                                                                                              
    i = 0;
    r = true;

    while (i < tam) {
        if (a[i] <= 0) {

            r = (r && false);
            i = i + 1;
        }
        else {

            r = (r && true);
            i = i +1;
        }
    }
    return r;
}

void pedirArreglo (int a[], int n_max) {
    int i;
    i = 0;
    while (i < n_max) {
        printf ("Ingrese el valor para la posicion %d del arreglo\n", i);
        scanf ("%d", &a[i]);
        i = i + 1;
    }
}

int main (void) {
    int x, i;
    bool r;

    printf ("Ingrese el tamaño del arreglo:\n");
    scanf ("%d", &x);

    assert (x > 0);

    int a[x];

    pedirArreglo (a, x);
    printf ("Ingrese 1 si quiere saber si existen positivos, y 0 si quiere saber si todos son positivos:\n");
    scanf ("%d", &i);

    assert (i == 0 || i == 1);

    if (i == 0) {
        r = todos_positivos (a, x);
    }
    else {
        r = existe_positivo (a, x);
    }
    if (r) {
        printf ("True\n");
    }
    else {
        printf ("False\n");
    }
}