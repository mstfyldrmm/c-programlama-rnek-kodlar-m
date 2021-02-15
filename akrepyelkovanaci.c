#include <stdio.h>
#include <stdlib.h>

double aci(int saat, int dakika){
	
	double aci;
	
	aci = (11*dakika-60*saat)/2;
	
	if(aci < 0)
	{
		aci = aci * -1;
	}

	return aci;
}

int main() {
	
	int saat, dakika;
	
	printf("***************Akrep ile yelkovan arasindaki aciyi bulan program********************\n\n\n");
	
	printf("Saati giriniz:");
	
	scanf("%d",&saat);
	
	printf("Dakikayi giriniz:");
	
	scanf("%d",&dakika);
	
	printf("Akrep ile yelkovan arasindaki aci : %f",aci(saat, dakika));
	
	
	
	
	
	return 0;
}
