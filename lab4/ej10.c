#include <stdio.h>
#include <stdbool.h> /* biblioteca estandar de booleanos*/
#include <assert.h>

typedef struct {
    int menores;
    int iguales;
    int mayores;
} com_t;

com_t cuantos (int a[], int tam, int elem) {
    int i;
    i = 0;

    com_t total;
    total.menores = 0;
    total.iguales = 0;
    total.mayores = 0;

    while (i < tam) {
        if (a[i] < elem) {
            total.menores += 1;
        }
        else if (a[i] == elem) {
            total.iguales = total.iguales + 1;
        }
        else {
            total.mayores = total.mayores + 1;
        }
        i = i + 1;
    }
    return total;
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

    printf ("Ingrese el tamaño del arreglo:\n");
    scanf ("%d", &x);
    
    int a[x];

    pedirArreglo (a, x);

    assert (x > 0);

    printf ("Ingrese el elemto que quiere comparar:\n");
    scanf ("%d", &i);

    com_t resultado = cuantos (a, x, i);

    printf ("Hay %d elementos menores.\n", resultado.menores);
    printf ("Hay %d elementos iguales.\n", resultado.iguales);
    printf ("Hay %d elementos mayores.\n", resultado.mayores);
    return 0;
}