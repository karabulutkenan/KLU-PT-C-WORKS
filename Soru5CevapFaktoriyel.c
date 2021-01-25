#include <stdio.h>
main(){
	
	int sayi,faktoriyel=1,i;
	
	printf("Lutfen Bir Sayi Giriniz: ");
	scanf("%d",&sayi);

	while(sayi>=1){
		
	faktoriyel=sayi*faktoriyel;
	sayi--;
}

	printf("Islem Sonucu: %d",faktoriyel);
	
	
}
