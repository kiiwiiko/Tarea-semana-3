#include <stdio.h>

int main() {
    int i, j;
    
    for (i = 0; i < 8; i++) {
        if (i < 4) {
            j = 1;
        } else {
            j = 2;
        }
        printf("%d %d\n", i, j);
    }
    
    return 0;
}