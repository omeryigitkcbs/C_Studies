#include <stdio.h>
#include <stdlib.h>

int main()
{
   // VE operatörü: &&, YA DA operatörü: ||, DEÐÝL operatörü: !

   int yas;
   int veli_izni; // 1: Veli izni var, 0: Veli izni yok.

   printf("Yasinizi Giriniz: ");
   scanf("%d", &yas);

   printf("Veli Izniniz Var Mi? ");
   scanf("%d", &veli_izni);

   if (yas >= 18 && veli_izni == 1) {
    printf("Geziye Katilabilirsiniz.");
   }

   else if (yas >= 18 || veli_izni == 1) {
    printf("Ozel Durum, Tekrar Gozden Gecirilecek.");
   }

   else {
    printf("Maalesef Katilamazsiniz.");
   }

    return 0;
}
