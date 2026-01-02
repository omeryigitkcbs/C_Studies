#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Eðer 2'den fazla seçenek varsa 'else if' kullanýrýz.

    int not;

    printf("Lutfen Notunuzu Giriniz:");
    scanf("%d", &not);

    if (not >= 80) {
        printf("Notunuz: A\n");
    }

    else if (not >= 60) {
        printf("Notunuz: B\n");
    }

    else if (not >= 50) {
        printf("Notunuz: C\n");
    }

    else {
        printf("Kaldiniz.");
    }

    return 0;
}

// Ýlk denemede '&' kullanmayý unuttuðum için aldýðým sonuç her zaman 'Kaldiniz.' oldu. Sebebi: Giriþ deðiþkene kaydedilmez.
