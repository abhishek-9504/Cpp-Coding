//Zig-Zag Patterns
#include<iostream>

using namespace std;

int main()
{
	int n=9, k, m, i, j;
	for(i=1; i<=9; i++)
	{
		for(j=1;j<=10;j++)
		{
			if(((i+j)%4==0) || ((i%2==0 && j%4==0)) || (j%2==0 && i%4==0))
			cout<<"* ";
			else
			cout<<"  ";
		}
		cout<<endl;
	}
	return 0;
}
