#include <stdio.h>

int main() {

    float bakiye = 1000.0;
    int dogruSifre = 1234;
    int girilenSifre;
    int secim;
    float miktar;


    printf("--- BANKAMATIK SISTEMINE HOS GELDINIZ ---\n");
    printf("Lutfen 4 haneli sifrenizi giriniz: ");
    scanf("%d", &girilenSifre);

    if (girilenSifre != dogruSifre) {
        printf("\nHatali sifre! Guvenlik nedeniyle sistem kapatildi.\n");
    }
    else {

        do {
            printf("\n********** MENÜ **********");
            printf("\n1. Bakiye Goruntule");
            printf("\n2. Para Yatir");
            printf("\n3. Para Cek");
            printf("\n4. Guvenli Cikis");
            printf("\nSeciminiz: ");
            scanf("%d", &secim);


            switch (secim) {
                case 1:
                    printf("\nMevcut Bakiyeniz: %.2f TL\n", bakiye);
                    break;

                case 2:
                    printf("\nYatirmak istediginiz tutar: ");
                    scanf("%f", &miktar);
                    bakiye += miktar;
                    printf("Islem basarili. Yeni bakiyeniz: %.2f TL\n", bakiye);
                    break;

                case 3:
                    printf("\nCekmek istediginiz tutar: ");
                    scanf("%f", &miktar);
                    if (miktar > bakiye) {
                        printf("HATA: Yetersiz bakiye! Mevcut: %.2f TL\n", bakiye);
                    } else {
                        bakiye -= miktar;
                        printf("Lutfen paranizi aliniz. Kalan bakiye: %.2f TL\n", bakiye);
                    }
                    break;

                case 4:
                    printf("\nBizi tercih ettiginiz icin tesekkurler. Iyi gunler dileriz!\n");
                    break;

                default:
                    printf("\nUYARI: Gecersiz bir secim yaptiniz. Lutfen 1-4 arasi girin.\n");
            }

        } while (secim != 4);
    }

    return 0;
}
