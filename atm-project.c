#include <stdio.h>
#include <stdlib.h>

int main(){

    float bakiye = 1000;
    int sifre = 1234;
    int secim;
    float ekle;
    float cikar;
    int girilenSifre;

    printf("Lutfen Sifrenizi Giriniz: ");
    scanf("%d", &girilenSifre);

    if (girilenSifre != 1234) {
        printf("Girdiginiz sifre yanlis tekrar deneyiniz.");
    } else {printf("Sifre dogru menu aciliyor.\n");

    printf(" 1.Bakiye Goruntule\n 2.Para Yatir\n 3.Para Cek\n 4.Cikis\n");
    scanf("%d", &secim);

    switch (secim) {

      case 1:
        printf("Bakiyeniz: %f", bakiye);
        break;

      case 2:
        printf("Yatirmak Istediginiz Miktari Giriniz: ");
        scanf("%f", &ekle);
        printf("Toplam Bakiyeniz: %f", bakiye+ekle);
        break;

      case 3:
        printf("Cekmek Istediginiz Miktari Giriniz: ");
        scanf("%f", &cikar);
        if (cikar > bakiye) {
            printf("Yetersiz Bakiye!");
        } else {
        printf("Kalan Bakiyeniz: %f", bakiye-cikar);
        }

        break;

      case 4:
        printf("Cikis Yapiliyor.");

    }

    }

    return 0;
}
