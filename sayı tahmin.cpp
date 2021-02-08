#include <stdio.h>
#include <stdlib.h>

int main(){
	
	// rand için  "stdlib.h" kütüphanesini dahil etmemiz gerekir 
	// rand() % istenilen max sayý 
	
	
	
	int hata, sayi, tutulan;
	
	printf("***************SAYI TAHMINI UYGULAMASI**************\n\n\n");
		
	tutulan = rand() % 100 ; // Tutulan sayi 0-100 arasýdýr
	
	while(1)
	{
		if(hata < 5)
		{
		printf("Bir sayi giriniz:");
		
		scanf("%d",&sayi);
		
		if(sayi < tutulan)
		{
			printf("Sayiniz kucuk arttirin\n");
			hata ++;
		}
		else if(sayi > tutulan )
		{
			printf("Sayiniz buyuk azaltin\n");
			hata ++;
		}
		else if(sayi == tutulan)
		{
			printf(".......Bravo bildiniz.....");
			hata ++;
			break;
		}
	}
	else 
	{
		printf("\nUzgunuz max hata miktarina ulastiniz\n");
		printf("Hata miktari: %d\n\n",hata);
		
		break;
	}
}
	switch(hata)
	{
		case 1:
			printf("Puaniniz 100");
			break;
		case 2:
			printf("Puaniniz 75");
			break;
		case 3:
			printf("Puaniniz 50");
			break;
		case 4:
			printf("Puaniniz 25");
			break;
		case 5:
			printf("Maalesef puaniniz 0");
			break;	
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
