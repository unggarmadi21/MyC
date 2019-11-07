//tugas tulis di kertas folio mencari suhu farenheit
#include<iostream>
using namespace std;
main()
{
	int	Celcius, Farenheit, Reamur;
	cout<<"TUGAS ALGORITMA DAN PEMROGRAMAN"<<endl;
	cout<<"Nama	= Unggar Madi"<<endl;
	cout<<"Nim	= 171011402176"<<endl;
	cout<<"Kelas	= 01TPLE204"<<endl;
	cout<<"====================================="<<endl;
	
	cout<<"MASUKAN NILAI SUHU CELCIUS	=";
	cin>>Celcius;
	Celcius = 5*5 / Celcius ;
	Farenheit = 9/5*Celcius+32;
	Reamur = 4/9*Celcius+32;
	cout<<"suhu celcius	="<<Celcius<<endl;
	cout<<"suhu farenheit	="<<Farenheit<<endl;
	cout<<"suhu reamur	="<<Reamur;
	
	return 0;
}
