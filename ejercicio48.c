#include <stdio.h>

int main(int argc, char const *argv[])
{
    int i=0, j=1;
   do
   {
        for (int i = 0; i <= 9; i++)
    {
        printf("%d", i);
    }
    for (int j = 0; j <= 5; j++)
    {
      if (j % 2 == 0) {
            printf("%d", j);
        } else {
            printf("%d", j);
            j++;
        }
    }
   } while ((i<=9) && (j<=5));
   return 0;
}