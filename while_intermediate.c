#include <stdio.h>

int main(){

    float urun_fiyati = 0.0;
    float toplam_tutar = 0.0;   // Hem bilgisayarýn rastgele bir sayý atamamasý için hem de matematiksel olarak hata olmamasý için tüm deðerler 0' olarak belirlenir.
    int urun_sayisi = 0;

    printf("---Market Kasasi---\n");
    printf("Urun fiyatlarini giriniz, toplama islemini durdurmak icin -1 degerini giriniz:\n");

    // Þimdi while döngüsünü baþlatarak -1 deðeri girilmediði sürece döngünün devam etmesini saðlayacaðýz.

    while (urun_fiyati != -1) {
        printf("%d. urun fiyati: ", urun_sayisi + 1); // Kullanýcýdan ürün fiyatýný aldýðýmýz kýsým.
        scanf ("%f", &urun_fiyati);

        if (urun_fiyati != -1) {

            if (urun_fiyati < 0) {
                printf("Hatali bir deger girdiniz! Lutfen tekrar deneyiniz.\n");
                continue; // Continue burada hatalý deðeri sonuçlara ekletmeden tekrar döngüyü en baþa atar.
            }
            toplam_tutar += urun_fiyati;
            urun_sayisi++;
        }
    }

    printf("\n----------------------\n");
    printf("ALISVERIS TAMAMLANDI!!!\n");
    printf("Toplam %d urun aldiniz.\n", urun_sayisi);
    printf("Odenecek Toplam Tutar: %.2f TL\n", toplam_tutar);
    printf("\n----------------------\n");

    return 0;
}
