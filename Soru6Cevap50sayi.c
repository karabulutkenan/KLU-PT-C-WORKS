#include <stdio.h>
int main()
{
   int sayi;
   int i, ort;
   int toplam =0;

   for(i=1;i<=50;i++)
   {
     printf("%d). Sayiyi Giriniz:",i);
     scanf("%d",& sayi);
     toplam=toplam+sayi;
     if(sayi==0){
       break;
       
     }  
       
   }
       printf("Toplam: %d",toplam);
       
       getch();

}
