#include<stdio.h>
#include<math.h>

int main()
{
	long long i,us=0,toplam=0,sayi;
	int kalan;
	for(i=2;i<10000000;i++)
	{
		sayi=i;
		while(sayi>0)
		{
			kalan=sayi%10;
			sayi/=10;
			us+=pow(kalan,5);
		}
		if(us==i)
		{
			printf("%d\n",us);
			toplam+=us;
		}
		us=0;
	}
	printf("\n%d",toplam);
}
