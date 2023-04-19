#include <stdio.h>

int main(int argc, char const *argv[])
{
    int y = 1;
    for (int i = 0; i <= 9; i++) {
        if (i % 2 == 0) {
            printf("%d %d\n", i, y);
        } else {
            printf("%d %d\n", i, y);
            y++;
        }
        
    }
    return 0;
}