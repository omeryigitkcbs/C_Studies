#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
    Temel ve en sýk kullanýlan deðiþkenler 4 tanedir:

    -int: Tam sayýlar için kullanýlýr.
    -float: Kesirli ama düþük hassasiyetli kesirli sayýlar için kullanýlýr.
    -double: Daha hassas kesirli sayýlar için kullanýlýr.
    -char: Tek karakter tanýmlamak gerektiðinde kullanýlýr. Týrnak kullanýlýr. ('a')

    */

    int yas = 19;
    int takipci = 235;

    float boy = 1.71;
    double pi_sayisi = 3.141592653589;

    char ad_bas_harfi = 'O';
    char soy_ad_bas_harfi = 'K';

    printf("Yasiniz: %d\n", yas);
    printf("Takipciniz: %d\n", takipci);

    printf("Boyunuz: %.2f\n", boy); // ".2" ifadesi virgülden sonra iki basamak okunmasý için yazýlýr.
    printf("pi Sayisi: %lf\n", pi_sayisi);

    printf("Bas Harfiniz: %c\n", ad_bas_harfi);
    printf("Soy Adinizin Bas Harfi: %c\n", soy_ad_bas_harfi);

    printf("Program Sonlandi.");

    return 0;
}
