#include <stdio.h>
#include <stdlib.h>

int main(){

    float a;
    float b;
    int secim;

    printf("Lutfen iki sayi giriniz: ");
    scanf("%f %f", &a, &b);

    printf("Lutfen Yapmak Istediginiz Islemi Seciniz: ");
    printf("1.Toplama\n 2.Cikarma\n 3.Carpma\n 4.Bolme\n");

    scanf("%d", &secim);

    switch (secim) {

    case 1:
        printf("Sonuc: %.2f", a+b);
        break;

    case 2:
        printf("Sonuc: %.2f", a-b);
        break;

    case 3:
        printf("Sonuc: %.2f", a*b);
        break;

    case 4:
        if (b == 0) {
            printf("Hatali Sayi Secimi.");}

        else {printf("Sonuc: %.2f", a/b);}

        break;

    default:
        printf("Gecersiz Bir Islem Sectiniz.");
}


    return 0;
}
