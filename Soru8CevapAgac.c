#include <stdio.h>

int main() {
	
	int yagisOrani;
  float agacBoyu;
  int i=1;
  printf("Agac Boyu Giriniz (cm): ");
  scanf("%f", &agacBoyu);
	

  do
  {
   
	printf("%d. Yil Yagis Orani Giriniz %%",i++);
     scanf("%d", &yagisOrani);
     
   if(yagisOrani<50)
   {
		agacBoyu= agacBoyu*1.15;
		printf("Agacinizin Boyu: %0.2f \n",agacBoyu); 
   }
   else {
  
       agacBoyu= agacBoyu*1.25;
		printf("Agacinizin Boyu: %0.2f \n",agacBoyu);
     }
   }
		
		while(i<=20);
 
	
	return 0;
}
