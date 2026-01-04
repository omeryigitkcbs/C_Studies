#include <stdio.h>
#include <stdlib.h>

int main()
{

    int gun_sayisi;
    int gunluk_tasarruf = 10;
    int toplam_birikim = 0;

    printf("Kac Gun Para Biriktireceksiniz? ");
    scanf("%d", &gun_sayisi);

    for (int i=1; i<= gun_sayisi; i++) {
        toplam_birikim += gunluk_tasarruf;

        printf("%d Gun: Kumbaraya %d TL Atildi. Toplam %d TL\n", i, gunluk_tasarruf, toplam_birikim);
        gunluk_tasarruf += 5;
    }

    printf("%d Gun Sonunda Toplam Biriken Para: %d TL\n", gun_sayisi, toplam_birikim);

    return 0;
}
