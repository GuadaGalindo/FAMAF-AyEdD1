#include <stdbool.h> /* biblioteca estandar de booleanos*/
#include <stdio.h>

void imprimeHola (void){
    printf ("Hola\n");
}

void imprimeChau (void){
    printf ("Chau\n");
}

int main(void) {
    imprimeHola ();
    imprimeHola ();
    imprimeChau ();
    imprimeChau ();
    return 0;
}