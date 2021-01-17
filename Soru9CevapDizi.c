#include <stdio.h>

int main() {

  int dizi[10];
  float islem;
  float toplam=0;
  int i;
  
  for (i=1;i<=10;i++)
  {
  	printf("%d. Sayiyi Giriniz: ",i);
  	scanf("%d",&dizi[i]);
  	toplam=toplam+dizi[i];
  	islem=toplam/i;
  }

  printf("\n BASTAN SONA DOGRU: %d,%d,%d,%d,%d,%d,%d,%d,%d,%d,\n", dizi[1], dizi[2], dizi[3], dizi[4], dizi[5], dizi[6], dizi[7], dizi[8], dizi[9],dizi[10]);
  printf("\n SONDAN BASA DOGRU: %d,%d,%d,%d,%d,%d,%d,%d,%d,%d,\n",dizi[10], dizi[9], dizi[8], dizi[7], dizi[6], dizi[5], dizi[4], dizi[3], dizi[2], dizi[1]);
  printf("\n Ortalama: %.2f",islem);
  

 
	
	return 0;
}
