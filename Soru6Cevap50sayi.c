#include <stdio.h>
main()
{
   int sayi,i,toplam =0;

   for(i=1;i<=50;i++)
   {
     printf("%d). Sayiyi Giriniz:",i);
     scanf("%d",& sayi);
     if(sayi==0){
     break;
     toplam=toplam+sayi; 
     }  
       
   }
       printf("Toplam: %d",toplam);

}
