#include <stdio.h>
main(){
	
int aractipi, km, ucret;
	
printf("\n 1-TAKSI\n 2-DOLMUS\n Lutfen Ulasim Tipini Seciniz [1-2]");
scanf("%d",&aractipi);
	
printf("Lutfen Gideceginiz Mesafeyi Giriniz (Km)");
scanf("%d",&km);

if (aractipi==1)
{
	ucret=km*1;
}
else if(aractipi==2)
{
	if(km%5==0)
	{
		ucret=km/5*2;
	}
	else
	{
		ucret=((km/5)+1)*2;
	}
}
	printf("Ucretiniz: %d", ucret);
	
}
