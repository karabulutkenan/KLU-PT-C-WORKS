#include <stdio.h>
int main()
{
   int yaricap;
   float pi=3.14, alan, cevre;

   printf("Lutfen Dairenin Yari Capini Giriniz (cm): ");
   scanf("%d",& yaricap);

   alan = pi * yaricap * yaricap;
   printf("\nDairenin alani: %0.2f cm2'dir'", alan);

   cevre = 2 * pi * yaricap;
   printf("\nDairenin cevresi: %0.2f cm'dir'", cevre);

   getch();
}

