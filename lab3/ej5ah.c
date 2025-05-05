#include <stdbool.h> /* biblioteca estandar de booleanos*/
#include <stdio.h>

int main(void){
    int i;
    printf ("Ingrese un valor para i\n");
    scanf ("%d", &i);

    while (i != 0)
    {
        i = i - 1;
    }
    return 0;
}