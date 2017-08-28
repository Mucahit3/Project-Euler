#include<stdio.h>
#include<math.h>

int main()
{
	int a,b,hipo,c=0,p,d=0;
	
	for(int a=1;a<=50;a++)
	{
		for(int b=1;b<=50;b++)
		{
			for(int hipo=1;hipo<=50;hipo++)
			{
				for(int p=1;p<=100;p++)
				{
					if(a*a+b*b==hipo*hipo && p==a+b+hipo)
					{
						printf("%d,%d,%d---%d\n",a,b,hipo,p);
						c++;
						if(c>d)
						{
							d=c;
						}
					}
					
				}
			}
		}
	}
	printf("\nBu sorunun toplamda %d cozumu vardir.",d/2);
	
	
}
