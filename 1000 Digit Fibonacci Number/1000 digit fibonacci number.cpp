#include<stdio.h>
#include<math.h>
#define SIZE 1000

int F(int a);

int main()
{
	int dizi1[SIZE];
	int dizi2[SIZE];
	int dizi3[SIZE];
	
	for(int i=0;i<SIZE;i++)
	{
		dizi1[i]=0;
		dizi2[i]=0;
		dizi3[i]=0;
	}
	dizi1[SIZE-1]=5;
	dizi2[SIZE-1]=8;
	
	int c=0,sayac=6;
	
	for(int j=1;j<=4776;j++)
	{
		for(int i=SIZE-1;i>=0;i--)
		{	
		 	dizi3[i]=dizi1[i]+dizi2[i]+c;
			c=0;
			if(dizi3[i]>=10)
			{
				dizi3[i]-=10;
				c=1;
			}
			dizi1[i]=dizi2[i];
			dizi2[i]=dizi3[i];
		}
		c=0;
		sayac++;
	}
	printf("%d-->",sayac);
	for(int i=0;i<SIZE;i++)
	{
		printf("%d",dizi3[i]);
	}	
	
}

int F(int a)
{
 	if(a==1)
 	{
 		return 1;
	}
	if(a==2)
	{
		return 1;
	}
	else
	{
		return F(a-1)+F(a-2);
	}
}
