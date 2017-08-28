#include<stdio.h>

int main()
{
	int sayi=1,toplam=0,toplam1,sayi1=0;
	for(int i=1;i<=100;i++)
	{
		sayi=i*i;
		toplam+=sayi;
	}
	printf("%d",toplam);
	
	for(int j=1;j<=100;j++)
	{
		sayi1+=j;
	}
	toplam1=sayi1*sayi1;
	printf("\n%d",toplam1);
	
	printf("\n\n%d",toplam1-toplam);
}
