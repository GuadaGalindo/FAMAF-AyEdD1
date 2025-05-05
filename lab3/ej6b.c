#include <stdbool.h> /* biblioteca estandar de booleanos*/
#include <stdio.h>

bool pedirBooleano (void) {
    int x, temp;
    printf ("Ingrese un Booleano, 1 para True o 0 para False\n");
    scanf ("%d", &temp);
    x = temp;
    return x;
}

void imprimeBooleano (bool x) {
    if (x == 0) {
        printf ("False\n");
    }
    else {
        printf ("True\n");
    }
}

int main(void){
    imprimeBooleano (pedirBooleano ());
    return 0;
}