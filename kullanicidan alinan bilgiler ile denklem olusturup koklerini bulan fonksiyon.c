#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float kok_bulma(int a, int b, int c){
	
	float kok1, kok2;
	
	int denklem, delta;
	
	delta =(b*b - 4*a*c);
	
	if(delta > 0){
		
		kok1 = (-b + sqrt(delta)) / a;
		
		kok2 = (-b - sqrt(delta)) / a;
		
		return kok1; 
		
		return kok2;
	}
	else if(delta == 0){
		
		kok1 = (-b + sqrt(delta)) / a;
		
		return kok1;
	}
	 
	else {
		
		printf("\nReel kok yoktur");
		
	}
	
	
	
	
}





int main() {
	
	int a, b, c;
	
	printf("Denklemin katsayilarini giriniz:");
	
	scanf("%d %d %d", &a, &b, &c);
	
	printf("%f",kok_bulma(a, b, c));
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
