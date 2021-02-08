#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	int sayi, a, b, c;
	
	for(a = 1; a < 10; a++)
	for(b = 1; b < 10; b++)
	for(c = 1; c < 10; c++)
	{
		sayi = 100 * a + 10 * b + c ;
		
		if(sayi % a == 0 && sayi % b == 0 && sayi % c == 0)
		{
			printf("Karamel sayi : %d\n",sayi);
		}
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
