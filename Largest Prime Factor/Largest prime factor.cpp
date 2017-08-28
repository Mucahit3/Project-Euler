#include<iostream>
#include<math.h>

using namespace std;
int main()
{
	// 600851475143 sayisinin en buyuk asal carpani nedir ?
	
 	long long sayi=6087787878; // sayi cok buyuk calistirmiyor.
	int a=1;
	
	for(int i=2;i<=sayi;i++)
	{
		if(sayi%i==0)
		{
			sayi/=i;
			a=i;
			i--;
		}
	}
//	printf("%lf",a);
	cout<< sayi << endl;
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}
