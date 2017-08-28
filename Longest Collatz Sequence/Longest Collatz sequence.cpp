#include<stdio.h>

int main()
{	
	long long i=2,sayi,b;
	int c=0,max=0;
	while(i<1000000)
	{
		sayi=i;
		a: if(sayi%2==1)
		{
			sayi=sayi*3+1;
			c++;
		}
		while(sayi%2==0)
		{
			sayi=sayi/2;
			c++;
		}
		if(sayi==1)
		{
			i++;
			if(c>=max)
			{
				max=c;
				b=i;
			}
			c=0;
		}
		else
		{
			goto a;
		}
	}
	printf("*%lld*\n",b-1);
}
