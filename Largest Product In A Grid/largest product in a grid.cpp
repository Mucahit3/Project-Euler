#include<iostream>
#include<fstream>

using namespace std;

int main()
{
	ifstream input("larg.txt");
	
	int array[20][20];
	
	for(int i=0;i<20;i++)
	{
		for(int j=0;j<20;j++)
		{
			input>>array[i][j];
		}
	}
    
    int carpim1,carpim2,carpim3,carpim4,max=0;
    
    for(int i=0;i<17;i++)
	{
		for(int j=0;j<17;j++)
		{
			carpim1=array[i][j]*array[i+1][j]*array[i+2][j]*array[i+3][j];
			if(carpim1>=max)
			{
				max=carpim1;
			}
		}
	}
	
	
	for(int i=0;i<17;i++)
	{
		for(int j=0;j<17;j++)
		{
			carpim2=array[i][j]*array[i][j+1]*array[i][j+2]*array[i][j+3];
			if(carpim2>=max)
			{
				max=carpim2;
			}
		}
	}
	
	for(int i=0;i<17;i++)
	{
		for(int j=0;j<17;j++)
		{
			carpim3=array[i][j]*array[i+1][j+1]*array[i+2][j+2]*array[i+3][j+3];
			if(carpim3>=max)
			{
				max=carpim3;
			}
		}
	}
	
	for(int i=19;i>2;i--)
	{
		for(int j=0;j<17;j++)
		{
			carpim4=array[i][j]*array[i-1][j+1]*array[i-2][j+2]*array[i-3][j+3];
			if(carpim4>=max)
			{
				max=carpim4;
			}
		}
	}
	
	cout<<max;
    
}
