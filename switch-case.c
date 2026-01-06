#include <stdio.h>
#include <stdlib.h>

int main()
{
    int secim;

    printf("Ders Secim Ekranina Hos Geldiniz. Lutfen Asagidaki Derslerden Birini Seciniz:\n");
    printf("1. Matematik\n");
    printf("2. Fizik\n");
    printf("3. Kimya\n");
    scanf("%d", &secim);

    switch (secim) {
    case 1:
        printf("Matematik Dersini Sectiniz.\n");
        break;

    case 2:
        printf("Fizik Dersini Sectiniz.\n");
        break;

    case 3:
        printf("Kimya Dersini Sectiniz.\n");
        break;

    default:
        printf("Gecersiz Bir Secim Yaptiniz.");
        break;
}

    printf("Ders Seciminiz Tamamlanmistir.\n");

    return 0;
}
