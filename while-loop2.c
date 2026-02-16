#include <stdio.h>
#include <stdlib.h>

int main(){

    int gizliSayi = 25;
    int tahminSayi;
    printf("---SAYI TAHMIN OYUNU---\n");
    printf("\nLutfen Bir Sayi Tahmin Ediniz:\n ");
    scanf("%d", &tahminSayi);

    while (gizliSayi != tahminSayi) {
        printf("Yanlis Tahmin Lutfen Tekrar Deneyin.");
        scanf("%d", &tahminSayi);
    }

    return 0;
}
