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
	
	// A n�n tam b�lenlerinin say�s�n�n toplam� B ye e�itse ve B nin tam b�lenlerin toplam� A ya e�itse dost say�lard�r
	
	int sayi1, sayi2;
	
	printf("Dost sayi testi icin iki sayi giriniz: ");
	
	scanf("%d %d", &sayi1, &sayi2);
	
	dostsayi(sayi1, sayi2);
	

	
	return 0;
}
