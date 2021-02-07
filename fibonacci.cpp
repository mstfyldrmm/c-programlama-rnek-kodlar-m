#include <stdio.h>

int main(){
	
	int a = 1, b = 1, c , n, i;
	
	printf("Fibonacci sayi dizisinde gosterilecek elaman sayisini giriniz:");
	
	scanf("%d",&n);
	
	for(i = 1; i <= n;i++)
	{
		a = b;
		b = c;
		c = a +b;
		
		printf("%d\t", c);
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
