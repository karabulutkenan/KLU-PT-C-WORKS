#include <stdio.h>
int main(){
	
	int sayi;
	int  faktoriyel=1;
	int i;
	
	printf("Lutfen Bir Sayi Giriniz: ");
	scanf("%d",&sayi);

	while(sayi>0){
	faktoriyel=sayi*faktoriyel;
	sayi--;
}

	printf("Islem Sonucu: %d",faktoriyel);
	
	
	getch();
	
	
}
