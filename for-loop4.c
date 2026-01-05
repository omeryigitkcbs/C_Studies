#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;

    printf("1 ile 20 Arasinda 3'e Bolunen Sayilar.\n");

    for (int i = 1; i <= 20; i++) {

        if (i % 3 == 0) {
        printf("%d, 3'e tam bolunur.\n", i);
      }
    }

    return 0;
}
