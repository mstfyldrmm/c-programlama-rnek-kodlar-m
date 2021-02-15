#include <stdio.h>
#include <stdlib.h>

int ebob(s1, s2){
	
	int i, n;
	
	for(i = 1; i <= s1 && i <= s2; i++){
		
		if(s1 % i == 0 & s2 % i == 0){
			
			n = i;
		}
	}
	
	return n;	
}





int main() {
	
	int sayi1, sayi2;
	
	printf("Ebobu alinacak sayilari giriniz:");
	
	scanf("%d %d",&sayi1, &sayi2);
	
	printf("Sayilarin ebobu : %d",ebob(sayi1, sayi2));
	

	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
