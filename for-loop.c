#include <stdio.h>
#include <stdlib.h>

int main()
{

    // Eðer döngü koþulu her zaman doðruysa programdan hiç çýkýlmaz ve bu bilgisayarýn iþlemcisini boþ yere yorar.
    // Bir döngü içerisinde iki farklý sayaç kontrol edilebilir.
    // 'Break' komutu döngüyü bir anda bitirir ve programdan çýkar.
    // 'Continue' komutu turu atlatýr.

    int hedef_sayi;
    int toplam = 0;
    int i;

    printf("1'den Kaca Kadar Olan Sayilari Toplayalim? \n");
    scanf("%d", &hedef_sayi);

    for (int i=1; i<=hedef_sayi; i++) {
        toplam += i;

        printf("Su An i: %d, Guncel Toplam: %d\n", i, toplam);
    }

    printf("\nSONUC: 1'den %d sayisina kadar olan sayilarin toplami: %d\n", hedef_sayi, toplam);

    return 0;
}
