#include <stdio.h>
#include <stdlib.h>

void dostsayi(int a, int b){
	
	int toplam1, toplam2 = 0, i;
	
	for(i = 1; i <= a; i++){
		
		if(a % i == 0){
			
			toplam1 += i;
		}
	}
	
	for(i = 1; i <= b; i++){
		
		if(b % i == 0){
			
			toplam2 += i;
		}
	}
	
	
	if(toplam1 == b && toplam2 == a){
		
		printf("%d %d dost sayilardir", a, b);
		
	}
	
	else {
		
		printf("%d %d dost sayi degiller", a, b);
		
	}
	
}

int main() {
	
	// A nýn tam bölenlerinin sayýsýnýn toplamý B ye eþitse ve B nin tam bölenlerin toplamý A ya eþitse dost sayýlardýr
	
	int sayi1, sayi2;
	
	printf("Dost sayi testi icin iki sayi giriniz: ");
	
	scanf("%d %d", &sayi1, &sayi2);
	
	dostsayi(sayi1, sayi2);
	

	
	return 0;
}
