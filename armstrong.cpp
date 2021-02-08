#include <stdio.h>

int main(){
	
	int a, b, c, kup, toplam, sayi, i;
	
	printf("****************Armstrong sayilari bulan program*************************\n\n\n\n");
	
	i = 1 ;
	
	for(a = 1; a < 10; a++)
	for(b = 0; b < 10; b++)
	for(c = 0; c < 10; c++)
	{
		sayi = 100 * a + 10 * b + c ;
		
		kup =  a * a * a + b * b * b + c * c * c ;
		
		if(sayi == kup)
		{
			printf("%d-->%d\n",i,sayi);
			
			i ++;
		}
		
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
