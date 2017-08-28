#include<stdio.h>
#include<math.h>

int main()
{
	//Cift fibonacci sayilarinin toplamini veren program(fibonacci<=4 milyon}
	
	int sayi0,sayi1,fibo,toplam=0;
	sayi0=1;
	sayi1=1;
	while(fibo<3000000)
	{
		fibo=sayi1+sayi0;
		sayi0=sayi1;
		sayi1=fibo;
		printf("%d ",fibo);
		if(fibo%2==0)
		{
			toplam+=fibo;
		}
	}
	printf("\nToplam = %d",toplam);
	
	
}
