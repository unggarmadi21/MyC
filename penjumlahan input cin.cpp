#include<iostream>
using namespace std;
main()
{
	int p, l, luas, keliling;
	cout<<"masukan panjang :";
	cin>>p;
	cout<<"masukan lebar :";
	cin>>l;
	luas = p*l;
	keliling = 2*(p+l);
	cout<<"luas = "<<luas<<endl;
	cout<<"keliling ="<<keliling;
}
