//mencetak nilai yang menyatakan detik//
#include<iostream>
using namespace std;
main()
{
	float J, M, D;
	
	cout<<"TUGAS ALGORITMA DAN PEMROGRAMAN"<<endl;
	cout<<"Nama	= Unggar Madi"<<endl;
	cout<<"Nim	= 171011402176"<<endl;
	cout<<"===================================="<<endl;
	cout<<"MASUKAN NILAI DETIK =";
	cin>>D;
	J	= D/3600;
	M	= D-(J*3600) / 60;
	D	= D- (J*3600)-(M*60);
	cout<<"JAM	="<<J<<endl;
	cout<<"MENIT	="<<M<<endl;
	cout<<"DETIK	="<<D;
	
	return 0;
}
