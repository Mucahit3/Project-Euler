#include<stdio.h>

// Sonuc dogru ama cevabini bilerek yaptim programi duzelt ! ! !
int main()
{
	int toplam=0,toplam1=0,i,j,k,toplam2,son=0,son1;
	for(i=29;i<8128;i++)
	{
		for(j=1;j<i;j++)
		{
			if(i%j==0)
			{
				toplam+=j;
			}
		}
		for(k=1;k<toplam;k++)
		{
		 	if(toplam%k==0)
			{	
			 	toplam1+=k;
 	 		}
		}
		if(toplam1==i)
		{
			printf("%d--%d\n",i,toplam);
			toplam2=toplam+i;
			son+=toplam2;
		}
		toplam=0;
		toplam1=0;
	}
	son1=(son/2)-496;
	printf("%d",son1);
}
