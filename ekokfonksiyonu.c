#include <stdio.h>
#include <stdlib.h>

int ekok(s1, s2){
	
	int i = s1 * s2, n;
	
	for(; i > 0; i--){
		
		if(i % s1 == 0 && i % s2 == 0){
			
			n = i;
		}
		
	}
	return n;
}



int main() {
	
	int sayi1, sayi2;
	
	printf("Ekoku alinacak iki sayi giriniz:");
	
	scanf("%d %d",&sayi1, &sayi2);
	
	printf("Bu iki sayinin ekoku : %d",ekok(sayi1, sayi2));
	
	
	
	
	return 0;
}
