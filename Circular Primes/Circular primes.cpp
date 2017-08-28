#include<iostream>

using namespace std;

int asal(int sayi);

int main()
{
	cout<<asal();
		
}

int asal(int sayi)
{
	int sayac=0;
	for(int i=2;i<=(sayi/2);i++)
	{
		if(sayi%i==0)
		{
			sayac++;
		}
	}
	
	if(sayac==0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
