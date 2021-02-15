#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void birinci(int sayi){
	
	if(sayi % 2 == 0){
		
		printf("Sayi cifttir");
		
	}
	else if(sayi % 2 == 1){
		
		printf("Sayi tektir");
	} 
}

int faktor(int sayi){
	
	int i, faktor = 1;
	
	for(; sayi > 0; sayi--){
		
		faktor = faktor * sayi;
	}
	
	return faktor;
}

float karekok(int sayi){
	
	return sqrt(sayi);
	
}



int main() {
	
	int secim, sayi;
	
	printf("Bir sayi giriniz:");
	
	scanf("%d",&sayi);
	
	printf("\nBu sayi ile ne yapmak istiyorsunuz ?");
	
	printf("\n1-Tek mi cift mi kontrolu ?\n2-Faktoriyeli bulma islemi\n3-Karekokunu alma\nYapmak istediginiz islemi tuslayiniz:");
	
	scanf("%d",&secim);
	
	switch(secim){
		
		case 1 : birinci(sayi);
		break;
		case 2 : printf("Sayinin faktoriyeli : %d",faktor(sayi));
		break;
		case 3 : printf("Sayinin karekoku : %5.f",karekok(sayi));
		break;
		default : printf("Yanlis tuslama yaptiniz lutfen tekrar deneyiniz");
		
	}
	
	
	
	
	
	
	
	
	
	return 0;
}
