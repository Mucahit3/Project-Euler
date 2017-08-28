#include<stdio.h>
#include<math.h>

//OLMADI ! ! ! 
int main()
{
	int a,b,c;
	for(a=1;a<1000;a++)
	{
		for(b=1;b<1000;b++)
		{
			for(c=1;c<1000;c++)
			{
				if(a<b && b<c && a*a+b*b==c*c && a+b+c==1000)
				{
					printf("%d,%d,%d",a,b,c);
				}
			}
		}
	}
}
