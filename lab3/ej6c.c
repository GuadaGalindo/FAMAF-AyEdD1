#include <stdbool.h> /* biblioteca estandar de booleanos*/
#include <stdio.h>

int pedirEntero (char c) {
    int x;
    printf ("Ingrese un valor para %c\n", c);
    scanf ("%d", &x);
    return x;
}

int ejercicio4 (void) {
    int x = pedirEntero ('x');
    int y = pedirEntero ('y');
    int z = pedirEntero ('z');
    int m = pedirEntero ('m');
    if (x < y) {
        m = x;
    }
    else if (x >= y) {
            m = y;
        } 

    if (m < z) {
        ;
    }
    else if (m >= z) {
            m = z;
        } 
    printf ("El resultado de x es: %d\n", x);
    printf ("El resultado de y es: %d\n", y);
    printf ("El resultado de z es: %d\n", z);
    printf ("El resultado de m es: %d\n", m);
    return 0;
}

int main(void) {
    ejercicio4 ();
    return 0;
}