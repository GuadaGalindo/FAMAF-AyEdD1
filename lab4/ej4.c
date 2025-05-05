#include <stdio.h>
#include <stdbool.h> /* biblioteca estandar de booleanos*/
#include <assert.h>

typedef struct {
    int cociente;
    int resto;
} div_t;

div_t division (int x, int y) {
    assert (x >= 0 && y >= 0);
    
    div_t total;
    total.cociente = x / y;
    total.resto = x % y;
    return total;
}

int main (void) {
    int x, y;

    printf ("Ingrese un valor positivo para x:\n");
    scanf ("%d", &x);
    printf ("Ingrese un valor positivo y distinto de 0 para y:\n");
    scanf ("%d", &y);

    assert (y != 0);

    div_t resultado = division (x, y);

    printf ("El resultado del cociente es: %d\n", resultado.cociente);
    printf ("El resultado del resto es: %d\n", resultado.resto);
    return 0;
}