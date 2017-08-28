#include<stdio.h>
#include<math.h>

int main()
{
	// 2 milyona kadar olan asal sayilarin toplami
	// program cok yavas calisiyor hizlandir.
	
	long long int toplam=0;
	int c=0;
	for(int i=3;i<=1999999;i+=2)
	{
		{
			for(int j=3;j<i/2;j++)
			{
			 	if(i%j==0)
				{
				 	c++;
					break;
				}
			}
			if(c==0)
			{
		     	toplam+=i;
		     	printf("%d\n",i);
			}
			c=0; 
		}
	}
	toplam+=2;
	printf("%lld",toplam);
}
