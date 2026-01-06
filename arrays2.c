#include <stdio.h>

int main() {
    int sayilar[3];
    int i;

    for (int i = 0; i < 3; i++) {
        printf("%d. sayiyi girin: ", i + 1);
        scanf("%d", &sayilar[i]);
    }

    printf("\nGirdiginiz sayilarin listesi:\n");

    for (int i = 0; i < 3; i++) {
        printf("Indis [%d] deki deger: %d\n", i, sayilar[i]);
    }

    return 0;
}
