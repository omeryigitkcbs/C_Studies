#include <stdio.h>
#include <stdlib.h>

int main()
{
    int secim;

    do {

    printf("---En Sevdiginiz Galatasaray Oyuncusu Hangisi?---\n");
    printf("1. Mauro Icardi\n");
    printf("2. Victor Osimhen\n");
    printf("3. Lucas Torreira\n");
    printf("4. Leroy Sane\n");
    printf("5. Yunus Akgun\n");
    printf("Seciminiz: ");
    scanf("%d", &secim);

    if (secim !=0) {
        printf("%d Numarali Oyuncuyu Sectiniz.\n", secim);
    }

    } while (secim != 0);

    printf("Gule Gule!");

    return 0;
}
