#include <stdio.h>
#include <stdlib.h>

void asalbul(int alt, int ust){
	
	int i, j, asal = 0;
	
	int sayilar[ust];
	
	for(i = alt; i <= ust;i++){
		
		for(j = i; j > 1; j--){
			
			if(i % j == 0){
				
				asal++;
				
			}

		}
		
		if(asal == 1){
			
			printf("Asal sayilar : %d\n",i);
			
		}
		asal = 0;
	}
	
	
}




int main() {
	
	int altsinir, ustsinir, asal = 0;
	
	int i, j;
	
	printf("Alt siniri giriniz:");
	
	scanf("%d",&altsinir);
	
	printf("Ust siniri giriniz:");
	
	scanf("%d",&ustsinir);
	
	asalbul(altsinir, ustsinir);
	
	
	
	
	
	
	return 0;
}
