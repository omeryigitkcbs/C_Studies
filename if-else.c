#include <stdio.h>
#include <stdlib.h>

int main()
{
    // if ve else yapýsý programýn karar verme yeteneðidir.

    /*

    if (kosul) {
    (Koþul doðruysa program burayý dikkate alýr.)
    }

    else {
    (Koþul yanlýþsa program burayý dikkate alýr.)
    }

    */

    // Önemli koþul sembolleri: == Eþittir, != Eþit Deðildir

    int yas;

    printf("Lutfen Yasinizi Giriniz:");
    scanf("%d", &yas);

    if (yas >= 18) {
        printf("Tebrikler! Ehliyet alabilirsiniz.");
    }

    else {
        printf("Ehliyet almak icin yasiniz yetmiyor.");
    }

    return 0;
}
