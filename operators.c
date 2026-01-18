#include <stdio.h>

int main(){

    int a, b, c, yeniSayi;
    int toplam;
    float ortalama;


    printf("Lutfen 3 sayi giriniz: ");
    scanf("%d %d %d", &a, &b, &c);

    toplam = a + b + c;
    ortalama = (float)toplam / 3;

    printf("Sayilarin Toplami: %d\n", toplam);
    printf("Sayilarin Ortalamasi: %.2f\n", ortalama);

    printf("Yeni bir tam sayi girin: ");
    scanf("%d", &yeniSayi);

    printf("Bu sayinin 2'ye bolumunden kalan: %d\n", yeniSayi % 2);

    return 0;
}
