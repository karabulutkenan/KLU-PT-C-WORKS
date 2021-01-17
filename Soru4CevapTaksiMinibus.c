#include <stdio.h>
int main(){
	
	int aractipi, dolmusfiyati, mesafe, islem ;
	int taksifiyati=1;
	float islem2;
	printf("KENAN TURIZM ILE A SEHRINDEN B SEHRINE GIDECEKSINIZ \n 1-TAKSI\n 2-DOLMUS\n Lutfen Ulasim Tipini Seciniz [1-2]");
			scanf("%d",&aractipi);
	
	switch(aractipi){
		
		case 1:
			printf("Lutfen Gideceginiz Mesafeyi Giriniz (Km)");
			scanf("%d",&mesafe);
			islem=taksifiyati*mesafe;
			printf("Toplam Fiyat: %d TL'dir",islem);
			break;
		case 2:
				printf("Lutfen Gideceginiz Mesafeyi Giriniz (Km)");
			scanf("%d",&mesafe);
			if(mesafe<=5){
			mesafe=2;
			printf("Toplam Fiyat: %d",mesafe);
			}
			else{
				islem2=(float)mesafe/5*2;
				printf("Toplam Fiyat: %.2f TL'dir",islem2);
			}
			break;
		default:
			printf("Hatali Giris");
		}
	
	
	getch();
	
	
}
