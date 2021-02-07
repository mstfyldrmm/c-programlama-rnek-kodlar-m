#include <stdio.h>

int main() {


int bakiye = 1000, islem, tutar;

printf("Islemler \n 1-Para cekme \n 2-Para yatirma \n 3-Havale yapma \n 4-Bakiye sorgulama \n 5-Kart iadesi \n");
printf("Yapmak istediginiz islemi tuslayiniz:");
scanf("%d",&islem);

switch(islem)
{
	case 1 :
		
		printf("Cekmek istediginiz tutari giriniz:");
		scanf("%d",&tutar);
	    if(tutar > bakiye)
	    {
	    	printf("Yetersiz bakiye Lutfen tekrar deneyiniz");
		}
		else
		{
			printf("Mevcut bakiyeniz : %d\n",bakiye);
			bakiye -= tutar ;
			printf("Yeni bakiyeniz : %d",bakiye);
			
		}
		break;
		
	case 2:
		
		printf("Yatirmak istediginiz tutari giriniz:");
		scanf("%d",&tutar);
		bakiye += tutar;
		printf("Yeni bakiyeniz : %d",bakiye);
		break;
		
	case 3:
		
		printf("Havale yapmak istediginiz tutari tuslayiniz:");
		scanf("%d",&tutar);
		
		if(tutar > bakiye)
	    {
	    	printf("Yetersiz bakiye Lutfen tekrar deneyiniz");
		}
		else
		{
			printf("Mevcut bakiyeniz : %d\n",bakiye);
			bakiye -= tutar ;
			printf("Yeni bakiyeniz : %d",bakiye);
			
		}
		break;
		
		
	case 4: 
	
	    printf("Bakiyeniz : %d",bakiye);
	    break;
	
	case 5:
		
		printf("Kartiniz iade ediliyor"); //eğer her durumda break kullanmaz isek diğer altinda kalan diger durumlarda calisir
        break;
		
	default :
		
		printf("Yanlis tuslama yaptiniz Lutfen tekrar deneyiniz");
	
}

return 0;
}
