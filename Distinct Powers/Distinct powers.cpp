#include<stdio.h>
#include<math.h>

int main()
{
	int us,c=0;
	for(int i=2;i<=5;i++)
	{
		for(int j=2;j<=5;j++)
		{
			us=pow(i,j);
			printf("%d,",us);
			c++;
		}
		printf("\n");
	}
	printf("%d",c);
}
