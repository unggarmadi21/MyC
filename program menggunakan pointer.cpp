#include<iostream>
using namespace std;
void duplicate(int&a, int&b, int&c)
{
	a*=2;
	b*=2;
	c*=2;
}
int main()
{
	int x=1, y=3, z=7;
	duplicate(x, y, z);
	cout<<"Nama	=	Unggar madi"<<endl;
	cout<<"Nim	=	171011402176"<<endl;
	cout<<"Kelas	=	02TPLE027"<<endl;
	cout<<"=========================================="<<endl;

	cout<<"x ="<<x<<", y = "<<y<<", z = "<<z;
	return 0;
}
