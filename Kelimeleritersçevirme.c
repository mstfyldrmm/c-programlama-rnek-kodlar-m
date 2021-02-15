#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void terscevir(char kelime[]){
	
	int uzunluk, i;
	
	uzunluk = strlen(kelime);
	
	char gecici[uzunluk];
	
	for (i = 0; i < uzunluk / 2; i++ )
	{
		gecici[i] = kelime[i];
		
		kelime[i] = kelime[uzunluk-1-i];
		
		kelime[uzunluk-1-i] = gecici[i];
	}
}


int main() {
	
	char  isim[100];
	
	printf("Texti giriniz:");
	
	scanf("%s",isim);
	
	terscevir(isim);
	
	printf("%s",isim);
	
	
	
	
	return 0;
}
