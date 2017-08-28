#include<stdio.h>
#include<math.h>
#define SIZE 100000
// Hizlandir ! ! !
int main()
{
	long long toplam=0;
	int c=2;
	long long dizi[SIZE];
	
	for(int i=1;i<SIZE;i++)
	{
		toplam+=i;
		dizi[i]=toplam;
		for(int j=2;j<=dizi[i]/2;j++)
		{
			if(dizi[i]%j==0)
			{
				c++;
			}
		}
		if(c>500)
		{
			printf("\n\n***%lld***\n\n",dizi[i]);break;
		}
		c=2;
		printf("\n");
	}
	
}
