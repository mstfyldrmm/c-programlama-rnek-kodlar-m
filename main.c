#include <stdio.h>
#include <stdlib.h>

/* Rastgele oluþan matriste en buyuk sayiyi bulan ve adetini yazdýran c kodu */

int main() {
	
	int satir, sutun, max, adet;
	
	int i, j;
	
	printf("Satir sayisi : ");
	
	scanf("%d", &satir);
	
	printf("Sutun sayisi : ");
	
	scanf("%d", &sutun);
	
	int matris[satir][sutun];
	
	for(i = 0; i < satir; i++) {
		
		for(j = 0; j < sutun; j++) {
			
			matris[i][j] = rand() % 10;
			
		}
		
		
	}
	
	for(i = 0; i < satir; i++) {
		
		for(j = 0; j < sutun; j++) {
			
			printf(" %d", matris[i][j]);
			
		}
		
		printf("\n");
		
	}
	
	for(i = 0; i < satir; i++) {
		
		for(j = 0; j < sutun; j++) {
			
			if(matris[i][j] > max) {
				
				max = matris[i][j];
				
			}
			
			
		}
		
		
	}
	
	for(i = 0; i < satir; i++) {
		
		for(j = 0; j < sutun; j++) {
			
			if(matris[i][j] == max) {
				
				adet++;
				
			}
			
			
		}
		
		
	}
	
	
	
	
	
	printf("max eleman : %d ve tekrar sayisi : %d", max, adet);



	
	
	
	
	
	
	return 0;
}
