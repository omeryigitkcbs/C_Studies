#include <stdio.h>
#include <stdlib.h>

int main()          // Orta düzey "While Döngüsü" örneði.
{
    int tahmin_sayisi = 15;
    int tahmin = 0;                       // Çöp deðerlerin tahmin edilecek sayý olup tesadüfen programý kapatmamasý için 0 atadýk.
    int deneme_sayisi = 0;                // Tahmin edilecek sayýyý kaçýncý tahminde bulduðumuzu gösteren sayaç.

    printf("---Sayi Tahmin Oyunu---\n");
    printf("1 ile 100 Arasinda Bir Sayi Tuttum, Bunu Tahmin Edebilir Misin?\n");      // Programýn giriþi.

    // Tahmin edilen sayý atanan deðere eþit olmadýkça program yeniden çalýþýr.

    while (tahmin != tahmin_sayisi) {  // Bu satýr "eðer tahmin edilen deðer tahmin_sayisi'na eþit deðilse programý döngüye sokar.
        printf("Tahmin: ");
        scanf("%d", &tahmin);           // Kullaýcýdan scanf ile veri alýnýr, deneme_sayisi ile de kaçýncý kez tahmin edildiði ortaya konur.
        deneme_sayisi++;

        if (tahmin < tahmin_sayisi) {
            printf("Daha Buyuk Bir Deger Giriniz!\n");
        } else if (tahmin > tahmin_sayisi) {
        printf("Daha Kucuk Bir Deger Giriniz!\n");
        }
    }

    printf("Tebrikler %d Denemede Dogru Tahmin Ettin!\n", deneme_sayisi);

    // Programýn doðru deðer girildiðinde nasýl kapanacaðý: while döngüsünün þartý saðlanmadýðý için program otomatik olarak while döngüsüne uðramýyor ve doðrudan en son yazýlan "Doðru Bildiniz" bölümüne atlýyor.

    return 0;
}
