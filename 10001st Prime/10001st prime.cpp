#include<stdio.h>
#include<math.h>
int main()
{
	//10 001. asal sayi nedir ? O degere kadar olanlar listelecek.
	
	int a=0,c=0;
	for(int i=2;i<105000;i++)
	{
		for(int j=1;j<=sqrt(i);j++)
		{
			if(i%j==0)
			{
				c++;
			}
		}
		if(c==1)
		{
	 	    a++;
  			printf("%d.deger = %d\n",a,i);	
  			c=0;
		}
		else
		{
			c=0;
		}
		if(a==10001)
		{
			break;
		}
	}
	
	
	
	
	
	
	
	
	
	
}
