#include <stdio.h>
#include <math.h>
main()
{
	int x,n,fx=0;
	printf("Sayi Giriniz: ");
	scanf("%d",&n);
	for(x=1; x<=n; x++);
	{
		fx=fx+pow(x,2);	
	}
	printf("Sonuc: %d",fx);
  
}
