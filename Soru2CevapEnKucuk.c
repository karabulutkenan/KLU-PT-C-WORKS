#include <stdio.h>


int main()
{ 
    int x,y,z,enk;
    
    printf(" Lutfen 1. Sayiyi Giriniz :");  
    scanf("%d",&x); 
    printf(" Lutfen 2. Sayiyi Giriniz :");  
    scanf("%d",&y);
	printf(" Lutfen 3. Sayiyi Giriniz :");  
    scanf("%d",&z);
	 
    if(x<y){
	if(x<z)
	{
	enk = x;
	}
}
	if(y<x){
	if(y<z)
	{
	enk = y;
	}
	}
	if(z<y){
	if(z<x)
	{
	enk = z;
	}
}
	printf ("Girdiginiz En Kucuk Sayi %d", enk);
           
    getch();
}

