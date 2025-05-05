#include <stdbool.h> /* biblioteca estandar de booleanos*/
#include <stdio.h>

int main(void){
    int x, y, z, a, b, c, d, e;

    printf ("Ingrese un valor para x\n");
    scanf ("%d", &x);
    printf ("Ingrese un valor para y\n");
    scanf ("%d", &y);
    printf ("Ingrese un valor para z\n");
    scanf ("%d", &z);
    
    a = (x+y+1);
    printf("Usted ingreso x=%d, y=%d, z=%d; entonces x+y+1 = %d\n", x, y, z, a);

    b = (z*z+y*45-15*x);
    printf("Usted ingreso x=%d, y=%d, z=%d; entonces z*z+y*45-15*x = %d\n", x, y, z, b);
    
    c = (y-2 == (x*3+1) % 5);
    printf("Usted ingreso x=%d, y=%d, z=%d; entonces (y-2 == (x*3+1) %% 5) = %d\n", x, y, z, c);

    d = ((y/2)*x);
    printf("Usted ingreso x=%d, y=%d, z=%d; entonces (y/2)*x = %d\n", x, y, z, d);

    e = (y<x*z);
    printf("Usted ingreso x=%d, y=%d, z=%d; entonces y<x*z = %d\n", x, y, z, e);

    return 0;
}

/*
Ingrese un valor para x
7
Ingrese un valor para y
3
Ingrese un valor para z
5
Usted ingreso x=7, y=3, z=5; entonces x+y+1 = 11
Usted ingreso x=7, y=3, z=5; entonces z*z+y*45-15*x = 55
Usted ingreso x=7, y=3, z=5; entonces (y-2 == (x*3+1) % 5) = 0
Usted ingreso x=7, y=3, z=5; entonces (y/2)*x = 7
Usted ingreso x=7, y=3, z=5; entonces y<x*z = 1

Ingrese un valor para x
1
Ingrese un valor para y
10
Ingrese un valor para z
8
Usted ingreso x=1, y=10, z=8; entonces x+y+1 = 12
Usted ingreso x=1, y=10, z=8; entonces z*z+y*45-15*x = 499
Usted ingreso x=1, y=10, z=8; entonces (y-2 == (x*3+1) % 5) = 0
Usted ingreso x=1, y=10, z=8; entonces (y/2)*x = 5
Usted ingreso x=1, y=10, z=8; entonces y<x*z = 0
*/
/* En la ultima expresión el resultado es de tipo int ya que en c no hay booleanos nativos (0 equivale a "False" y culquier otro numero equivale a "True")*/