#include <stdio.h>

int main(int argc, char const *argv[])
{
    int cont1=0, cont2=1;
   do
   {
        for (int i = 0; i <= cont1; i++)
    {
        printf("%d", cont1);
    }
    int y=1;
    for (int j = 0; j <= cont2; j++)
    {
      if (j % 2 == 0) {
            printf("%d", y);
        } else {
            printf("%d", y);
            y++;
        }
    }
   } while ((cont1<=9) && (cont2<=5));
   return 0;
}