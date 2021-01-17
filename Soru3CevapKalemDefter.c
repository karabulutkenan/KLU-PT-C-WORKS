#include <stdio.h>
int main(){
	
	int uruntipi, islem, kalemfiyati, defterfiyati, adet ;
	
	printf("MENU \n 1-Kalem\n 2-Defter\n Lutfen Urun Tipi Seciniz [1-2]");
			scanf("%d",&uruntipi);
	
	switch(uruntipi){
		
		case 1:
			printf("Lutfen Urun Adedi Giriniz");
			scanf("%d",&adet);
			printf("Lutfen Birim Fiyati Giriniz");
			scanf("%d", &kalemfiyati);
			islem=kalemfiyati*adet*1.10;
			printf("Toplam Fiyat: %d",islem);
			break;
		case 2:
				printf("Lutfen Urun Adedi Giriniz");
			scanf("%d",&adet);
			printf("Lutfen Birim Fiyati Giriniz");
			scanf("%d", &defterfiyati);
			islem=defterfiyati*adet*1.15;
			printf("Toplam Fiyat: %d",islem);
			break;
		default:
			printf("Hatali Giris");
		}
	
	
	getch();
	
	
}
