#include <stdio.h>
#include <stdbool.h> /* biblioteca estandar de booleanos*/
#include <assert.h>
#define N 4

typedef char clave_t;
typedef int valor_t;

typedef struct {
    clave_t clave;
    valor_t valor;
} asoc;

bool asoc_existe (asoc a[], int tam, clave_t c) {
    int i;
    bool r;
    i = 0;
    r = false;

    while (i < tam) {
        if (a[i].clave == c) {
            return true;
        }
        else {
            i = i + 1;
        }
    }
    return r;
}

void pedirArreglo (asoc a[], int n_max) {
    int i;
    i = 0;

    while (i < n_max) {
        printf ("Ingrese la clave para la posicion %d del arreglo\n", i);
        scanf (" %c", &a[i].clave);
        printf ("Ingrese el valor para la posicion %d del arreglo\n", i);
        scanf ("%d", &a[i].valor);
        i = i + 1;
    }
}

int main (void) {
    asoc a[N];
    bool r;

    pedirArreglo (a, N);
    clave_t x;

    printf ("Ingresar la clave: \n");
    scanf (" %c", &x);
    
    r = asoc_existe (a, N, x);
    
    if (r) {
        printf ("La clave se encuentra en el arreglo\n");
    }
    else {
        printf ("La clave no se encuentra en el arreglo\n");
    }
}