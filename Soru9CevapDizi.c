#include <stdio.h>

main() {

  int dizi[10],i,toplam=0,ort;
  
  for (i=0;i<=9;i++)
  {
  	printf("%d. Sayiyi Giriniz: ",i+1);
  	scanf("%d",&dizi[i]);
  	toplam=toplam+dizi[i];
  }
  for (i=0;i<=9;i++)
  {
  	printf("%d\n ",dizi[i]);
  	
  }
  for (i=9;i>=0;i--)
  {
  	printf("%d\n ",dizi[i]);
  	
  }
  ort=toplam/10;
  printf("\n Ortalama: %d",ort);
 
}
