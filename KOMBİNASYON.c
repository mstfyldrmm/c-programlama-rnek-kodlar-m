#include <stdio.h>


int main() {
	
	int sayi_1, sayi_2, i, j, per = 1, faktor = 1, sonuc;
	
	printf("Kombinasyonu hesaplanacak sayilari giriniz:");
	
	scanf("%d %d",&sayi_1, &sayi_2);
    
    i = sayi_1 ;
    
    j = sayi_2 ;
    
    while(j > 0 )
    {
    	per = per * i ;
    	
    	i--;
    	j--;
	}
    i = sayi_2 ;

    while(i > 0)
{
	  faktor = faktor * i ;
	
	   i--;
}
	sonuc = per / faktor ;
	
    printf("%d nin %d li kombinasyonu = %d",sayi_1, sayi_2,sonuc );
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
