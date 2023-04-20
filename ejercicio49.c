#include <stdio.h>

int main() {
    int i, j, k;
    for (i = 1; i <= 9; i++) {
        if (i <= 3) {
            j = 1;
            k = i;
        } else if (i <= 6) {
            j = 2;
            k = i - 3;
        } else {
            j = 3;
            k = i - 6;
        }
        if (i % 3 == 1) {
            printf("%d ", j);
        }
        if (i % 3 == 2) {
            printf("%d ", k);
        }
        if (i % 3 == 0) {
            printf("%d\n", k);
        }
    }
    return 0;
}
