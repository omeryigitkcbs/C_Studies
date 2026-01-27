#include <stdio.h>
#include <stdlib.h>

int main(){

    int id;
    int sifre;

    printf("Lutfen ID Giriniz: ");

    scanf("%d", &id);

    printf("Lutfen Sifre Giriniz: ");

    scanf("%d", &sifre);

    if (id == 1905 && sifre == 26) {
        printf("Giris Basarili.");
    } else if (id != 1905 && sifre == 26) {
    printf("Kullanici Bulunamadi.");
    } else if (id == 1905 && sifre != 26) {
    printf("Sifre Yanlis.");
    }


    return 0;
}
