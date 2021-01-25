#include <stdio.h>


main()
{ 
    int x,y,z,enk;
    
    printf(" Lutfen 1. Sayiyi Giriniz :");  
    scanf("%d",&x); 
    printf(" Lutfen 2. Sayiyi Giriniz :");  
    scanf("%d",&y);
	printf(" Lutfen 3. Sayiyi Giriniz :");  
    scanf("%d",&z);
	 
    if(x<y)
    {
	enk = x;
    }
    else
    {
	    enk = y;
    }
    if(z<enk)
    {
	    enk = z;
    }

	printf ("Girdiginiz En Kucuk Sayi %d", enk);   

}

