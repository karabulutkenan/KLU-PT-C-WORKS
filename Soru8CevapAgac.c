#include <stdio.h>

main() {
	
int yagisOrani,yil=1;
float agacBoyu;
printf("Agac Boyu Giriniz (cm): ");
scanf("%f", &agacBoyu);
	

  do
  {
   
	printf("%d. Yil Yagis Orani Giriniz %%",yil);
     	scanf("%d", &yagisOrani);
     		 
     
   if(yagisOrani<50)
   {
		agacBoyu= agacBoyu*1.15;
}
   else {
  
       agacBoyu= agacBoyu*1.25;
     }
      
	   printf("%d. Yildaki Agacinizin Boyu: %0.2f \n",yil,agacBoyu);
	   yil++;2
	   
   }
while(yil<=20);

}

