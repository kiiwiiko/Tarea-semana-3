#include <stdio.h>

#include <stdio.h>

int main() {
    int x = 0, y = 1;
    for (int i = 0; i < 10; i++) {
        if (i % 2 == 0) {
            printf("%d %d \n", x, y);
            y++;
        } else {
            printf("%d %d \n", x, y);
            x++;
            y++;
        }
    }
    return 0;
}