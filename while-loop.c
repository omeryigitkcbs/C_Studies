#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sayi;
    int toplam = 0;

    printf("Toplamak Istediginiz Sayilari Giriniz (Programdan Cikmak Icin 0 giriniz):\n");
    scanf("%d", &sayi);

    while (sayi != 0) {
        toplam += sayi;
        printf("Su An Ki Toplam: %d, Yeni Sayi Giriniz: ", toplam);
        scanf("%d", &sayi);

        }

    printf("Sayilarin Toplami: %d", toplam);

    return 0;
}
