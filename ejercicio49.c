#include <stdio.h>

int main() {
    int i, j, k;
    int count = 0;

    for (i = 1; i <= 3; i++) { // primer número de la terna
        for (j = 1; j <= i; j++) { // segundo número de la terna
            for (k = 1; k <= j; k++) { // tercer número de la terna
                count++;
                printf("%d ", count);
            }
            printf("\n");
        }
    }

    return 0;
}