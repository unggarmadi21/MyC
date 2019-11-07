#include<iostream>
using namespace std;
main()
{
	// tipe data
int KodeHari;

//data mahasiswa
cout<<"Nama	=	Unggar Madi"<<endl;
cout<<"Nim	=	171011402176"<<endl;
cout<<"Kelas	=	02TPLE027"<<endl;
cout<<"============================================="<<endl;

// masukan kode hari
cout<<"masukan nama mahasiswa	:";
cin>>mahasiswa;

// kondisi switch
switch(KodeHari){
case 1:
cout<<"Senin"<<endl;
break;
case 2:
cout<<"Selasa"<<endl;
break;
case 3:
cout<<"Rabu"<<endl;
break;
case 4:
cout<<"Kamis"<<endl;
break;
case 5:
cout<<"Jum'at"<<endl;
break;
case 6:
cout<<"Sabtu"<<endl;
break;
case 7:
cout<<"Minggu"<<endl;
break;
default :
cout<<"kode tidak ada"<<endl;
	}
}

