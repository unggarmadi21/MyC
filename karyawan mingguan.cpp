#include "iostream"
using namespace std;

 main()
{
	char nama[30],golongan;
	int upah,hari,lembur;
	long gaji;


	cout<<"UPAH KARYAWAN MINGGUAN\n";
	cout<<"=========================\n";
	cout <<"nama karyawan=";
	cin.getline(nama,30);
	cout<<"golongan(a/b/c/d)=";
	cin>>golongan;
	cout<<"hari kerja=";cin>>hari;cout<<"hari";
	if(hari>7){
		cout<<"jam lembur=";cin>>lembur;
		cout<<"=========================\n";
	}else{
		cout<<"=========================\n";
	}
	switch (golongan) {
	case 'a':
		upah=48*10000;                                                   
		break;
	case 'b':
		upah=48*9000;                                                   
		break;
	case 'c':
		upah=48*8000;                                                   
		break;
	case 'd':
		upah=48*7000;                                                   
		break;
	
	default:
		cout<<nama;
		cout<<"Rp.0"<<upah;
		break;
}
	
	
if(hari>7){
	gaji=lembur*3000+upah;
}else{
	gaji=upah;
}
cout<<"nama karyawan="<<nama<<"\n";
cout<<"gaji karyawan="<<gaji;
	return 0;
}
