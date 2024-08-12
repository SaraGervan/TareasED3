#include <stdio.h>

int main(int argc, char** argv){

    printf("Hello World!\n");
    //Variables
    int a = 17;
    int b = 243;
    double c = 3.78923;

    int suma = a + b;
    int resta = b - a;
    double multiplicacion = a * c;
    double division = b / c;

    printf("El resultado de la suma de %d + %d es %d \n", a, b, suma);
    printf("El resultado de la resta de %d - %d es %d \n", b, a, resta);
    printf("El resultado de la multiplicación de %d x %lf es %lf \n", a, c, multiplicacion);
    printf("El resultado de la división de %d / %lf es %lf \n", b, c, division);

    return 0;
}