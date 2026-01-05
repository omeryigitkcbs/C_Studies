#include <stdio.h>
#include <stdlib.h>

int main()
{
    int max_deger;
    int i;
    int tek_sayi = 0;
    int cift_sayi = 0;

    printf("Kaca Kadar Olan Sayilari Analiz Edelim? ");
    scanf("%d", &max_deger);

    for (int i = 1; i<= max_deger; i++){
        if (i % 2 == 0) {
            cift_sayi++;
        } else {
            tek_sayi++;}
    }

    printf("\n---Sonuc---\n");
    printf("Tek Sayi Adedi: %d\n", tek_sayi);
    printf("Cift Sayi Adedi: %d", cift_sayi);


    return 0;
}
