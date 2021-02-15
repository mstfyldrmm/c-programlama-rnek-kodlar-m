#include <stdio.h>
#include <stdlib.h>

//Faktöriyelini alan fonksiyon

int faktor(n)
{
   int sonuc = 1;
   
   for (; n > 0; n--)
   {
   	  sonuc *= n;
   }
   
   return (sonuc);
}



int main() {
	
	int sayi;
	
	printf("Faktoriyeli hesaplanacak sayi giriniz:");
	
	scanf("%d",&sayi);
	
	printf("Faktoriyel sonucu : %d",faktor(sayi));
	
	
	return 0;
}
