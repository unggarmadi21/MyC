#include<iostream>
using namespace std;
int main()
{
	int nomor=1;
	for(int i=1; i<=5; i++)
	{
		for(int j=1; j<=i; ++j)
		{
			cout<<j<<""<<++nomor;
		}
		cout<<endl;
	}
	return 0;
}
