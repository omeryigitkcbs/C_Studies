#include <stdio.h>
#include <stdlib.h>

int main()
{
   int tekrar_sayisi;

   printf("Isminizi Kac Kez Yazalim?\n");
   scanf("%d", &tekrar_sayisi);

   for (int i = 1; i <= tekrar_sayisi; i++) {
    printf("%d. Tur: Omer\n", i);
   }

    return 0;
}
