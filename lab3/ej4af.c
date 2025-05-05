#include <stdbool.h> /* biblioteca estandar de booleanos*/
#include <stdio.h>

int main(void){
    int x, y;
    printf ("Ingrese un valor para x\n");
    scanf ("%d", &x);
    printf ("Ingrese un valor para y\n");
    scanf ("%d", &y);

    if (x >= y) {
        x = 0;
    }
    else if (y >= x) {
        x = 2;
    } 
        
    printf ("El resultado de x es: %d\n", x);
    return 0;
}