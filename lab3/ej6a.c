#include <stdbool.h> /* biblioteca estandar de booleanos*/
#include <stdio.h>

int pedirEntero (void) {
    int x;
    printf ("Ingrese un valor para x\n");
    scanf ("%d", &x);
    return x;
}

void imprimeEntero (int x) {
    int a = x;
    printf ("Su valor de x es: %d\n", a);
}

int main(void){
    imprimeEntero (pedirEntero ());
    return 0;
}