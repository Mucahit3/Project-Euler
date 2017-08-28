#include<stdio.h>
#include<math.h>

int Permutasyon(int sayi);

int main()
{
	long long toplam,i,sayi;
	int kalan;
	
	for(i=3;i<100000;i++)
	{
		toplam=0;
		sayi=i;
		while(sayi>0)
		{
			kalan=sayi%10;
			sayi/=10;
			toplam=toplam+Permutasyon(kalan);
		} 
		if(toplam==i)
		{
			printf("%lld ",toplam);
		}
	}
}

int Permutasyon(int sayi)
{
	int carpim=1;
 	while(sayi>0)
 	{
		carpim=carpim*sayi;
		sayi--;
    }
    return carpim;
}
