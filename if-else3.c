#include <stdio.h>
#include <stdlib.h>

int main(){

    int yas;
    int not;

    printf("Lutfen Yasinizi Girin: ");
    scanf("%d", &yas);

    if (yas < 18){
        printf("Ehliyet Almak Icýn Yasin Kucuk.");
    }

    else {
        printf("Sinav Notunuz Kac?\n");
        scanf("%d", &not);

        if (not >= 70) {
            printf("Ehliyet Almaya Hak Kazandiniz.");
        }

        else {
            printf("Sinavi Kazanamadiniz.");
        }
    }

    return 0;
}
