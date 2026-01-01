#include <stdio.h>
#include <stdlib.h>

int main(){

/*
  Aritmetik Operatörler:

  +, Toplama
  -, Çýkarma
  *, Çarpma
  /, Bölme
  %, Mod Alma

  Bölme Ýþlemine Dikkat!

  Ýki tam sayýyý birbirine bölersen sonuç tam sayý çýkar.
  5 / 2 iþleminin sonucu normalde 2.5'tir ama C dilinde iki int bölündüðü için sonuç 2 çýkar.
  Eðer 2.5 sonucunu istiyorsan, sayýlardan en az birinin float olmasý gerekir: 5.0 / 2 gibi.

*/

   int a = 10, b = 2;
   int  toplam, fark, carpim, kalan;
   float bolum;  // Virgülden sonrasýný görmek için float deðiþkeni kullanýlýr.

   toplam = a+b;
   fark = a-b;
   carpim = a*b;
   kalan = a%b;
   bolum = a/b;

   printf("Sayilarin Toplami: %d\n", toplam);
   printf("Sayilarin Farki: %d\n", fark);
   printf("Sayilarin Carpimi: %d\n", carpim);
   printf("Sayilarin Bolumunden Kalan: %d\n", kalan);
   printf("Sayilarin Bolumu: %f\n", bolum);



    return 0;
}
