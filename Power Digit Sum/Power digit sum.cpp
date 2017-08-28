#include<stdio.h>
#include<math.h>
#define SIZE 10

int main()
{
	int dizi[500];
	
	for(int i=0;i<495;i++)
	{
		dizi[i]=0;
	}
	dizi[499]=8;
	dizi[498]=6;
	dizi[497]=7;
	dizi[496]=2;
	dizi[495]=3;
	
	int c=0;
	
	for(int j=1;j<=985;j++)
	{
		for(int i=499;i>=0;i--)
		{
			
		 	dizi[i]=dizi[i]*2;
			dizi[i]=dizi[i]+c;
			if(dizi[i]>=10)
   			{
			 	dizi[i]=dizi[i]-10;
				c=1;
			}
			else
			{
			 	c=0;
			}
		}
	}
	int toplam=0;
	for(int i=0;i<500;i++)
	{
		toplam+=dizi[i];
	}
	printf("%d",toplam);
	
	
}
