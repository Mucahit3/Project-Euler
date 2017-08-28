#include<stdio.h>
#include<math.h>

int main()
{
	int a=0,b=0,c=0,d=0,e=0,f=0,i,j,sayi,g=0;
	for(i=1;i<1000;i++)
	{
		for(j=1;j<1000;j++)
		{
			sayi=i*j;
			a=sayi/100000;
			b=(sayi%100000)/10000;
			c=((sayi%100000)%10000)/1000;
			d=(((sayi%100000)%10000)%1000)/100;
			e=((((sayi%100000)%10000)%1000)%100)/10;
			f=((((sayi%100000)%10000)%1000)%100)%10;
		    if(a==f && b==e && c==d)
			{
   			    g=sayi;
    			printf("%d\n",g);
			}
		}
	}
	printf("\n\n\n%d",g);
	

	
	
	
	
	
	
	
	
}
