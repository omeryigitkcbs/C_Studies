#include <stdio.h>

int main()
{
    int yas;
    float boy;
    char harf;

    printf("Yasinizi Giriniz: ");
    scanf("%d", &yas);

    printf("Boyunuzu Giriniz: ");
    scanf("%f", &boy);

    printf("En Sevdiginiz Harfi Girin: ");
    scanf(" %c", &harf);

    return 0;
}
