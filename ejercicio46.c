#include <stdio.h>

int factorial(int a)
{
    int suma;
    for (int i = 1; i <= a; i++)
    {
        suma = suma + i;
    }
    int fac = suma;
    
    return fac;
}

int main(int argc, char const *argv[])
{
    int num;
    printf("Ingresar el numero que desea procesar ");
    scanf("%d", &num);
    int resut = factorial(num);
    int prom = resut / num;
    printf("El promedio de la suma de los factoriales del numero %d es %d", num, prom);
    return 0;
}