#include<stdio.h>
#include<math.h>
#define SIZE 158

int main()
{
	int dizi[SIZE];
	dizi[SIZE-1]=0;
	dizi[SIZE-2]=0;
	dizi[SIZE-3]=8;
	dizi[SIZE-4]=8;
	dizi[SIZE-5]=2;
	dizi[SIZE-6]=6;
	dizi[SIZE-7]=3;
	
	for(int i=0;i<SIZE-7;i++)
	{
		dizi[i]=0;
	}
	
	int c=0;
	
	for(int i=11;i<=100;i++)
	{
		for(int j=SIZE-1;j>=0;j--)
		{
			dizi[j]=dizi[j]*i;
			dizi[j]=dizi[j]+c;
			c=0;
			while(dizi[j]>=10)
			{
				dizi[j]=dizi[j]-10;
				c++;
			}
		}
	}
	int toplam=0;
	for(int i=0;i<SIZE;i++)
	{
		toplam+=dizi[i];
	}
	printf("%d",toplam);
}

