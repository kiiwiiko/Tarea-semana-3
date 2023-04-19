#include <stdio.h>

int main(int argc, char const *argv[])
{
    int suma, num;
    printf("Escribir un numero ");
    scanf("%d", &num);
    for (int i = 1; i <= num; i++)
    {
        suma = suma + i;
    }
    printf("La sumatoria de los factoriales del numero %d es %d", num, suma);
    return 0;
}