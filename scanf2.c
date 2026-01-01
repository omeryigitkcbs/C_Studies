#include <stdio.h>
#include <stdlib.h>

int main() {

    int yas;
    char isim[20];

    printf("Lutfen adinizi giriniz: ");            // scanf ile kullanýcýdan veri alýrken eðer sayý alýyorsak "&" kullanýlýr ama metin ise "&" kullanýlmaz.
    scanf("%s", isim);

    printf("Lutfen yasinizi giriniz: ");
    scanf("%d", &yas);

    printf("Merhaba %s, yasiniz %d! Bilgileriniz kaydedildi.\n", isim, yas);

    return 0;
}
