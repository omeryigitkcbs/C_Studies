#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sayi;
    printf("Bir sayi giriniz: ");
    scanf("%d", &sayi);

    if (sayi % 3 == 0 && sayi % 5 == 0) {
        printf("Sayi hem 3'e hem 5'e bolunur.");
    }

    else if (sayi % 3 == 0 || sayi % 5 == 0) {
        printf("Sayi ya 3'e ya da 5'e bolunur.");
    }

    else {
        printf("Sayi 3'e ya da 5'e bolunmez.");
    }

    return 0;
}
