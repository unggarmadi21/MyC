#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	// tipe data
int mahasiswa, jawab, awal, selesai, total;
int a[2][2];
	int i,j;
// masukan kode mahasiswa
cout<<"masukan no urut mahasiswa	[1 s.d 7] :";
cin>>mahasiswa;
		cout<<"Masukan nilai matrik 2x2	="<<endl;
		cin>>mahasiswa;
		cout<<endl;
// kondisi switch
switch(mahasiswa){
	case 1:
		for (i=0;i<2;i++)
		{
			for (j=0;j<2;j++)
			{
				cout<<"Elemen ke = "<<(i+1)<<","<<(j+1)<<" : ";
				cin>>a[i][j];
			}
		}
		cout<<"Matrix 2x2	="<<endl<<endl;
		for (int i=0;i<2;i++)
		{
			for (int j=0;j<2;j++)
			{
				cout<<a[i][j]<<endl<<"";
				
			}
			cout<<endl;
		}
case 2:
	
		for (i=0;i<2;i++)
		{
			for (j=0;j<2;j++)
			{
				cout<<"Elemen ke = "<<(i+1)<<","<<(j+1)<<" : ";
				cin>>a[i][j];
			}
		}
		cout<<"Matrix 2x2	="<<endl<<endl;
		for (int i=0;i<2;i++)
		{
			for (int j=0;j<2;j++)
			{
				cout<<a[i][j]<<endl<<"";
				
			}
			cout<<"Hasil perkalian :"<<a[i][j]*a[i][j]<<endl;
		}
case 3:
cout<<"Nama	=	Unggar Madi"<<endl;
cout<<"Nim	=	171011402176"<<endl;
cout<<"Kelas	=	02TPLE027"<<endl;
cout<<"============================================="<<endl;
break;
case 4:
cout<<"Nama	=	Dwi Sutikno"<<endl;
cout<<"Nim	=	171011402175"<<endl;
cout<<"Kelas	=	02TPLE027"<<endl;
cout<<"============================================="<<endl;
break;
case 5:
cout<<"Nama	=	Rahmat Yudha"<<endl;
cout<<"Nim	=	171011402174"<<endl;
cout<<"Kelas	=	02TPLE027"<<endl;
cout<<"============================================="<<endl;

break;
case 6:
cout<<"Nama	=	Reza Septian"<<endl;
cout<<"Nim	=	171011402173"<<endl;
cout<<"Kelas	=	02TPLE027"<<endl;
cout<<"============================================="<<endl;

break;
case 7:
cout<<"Nama	=	Fadly"<<endl;
cout<<"Nim	=	171011402172"<<endl;
cout<<"Kelas	=	02TPLE027"<<endl;
cout<<"============================================="<<endl;

break;
case 8:
cout<<"Nama	=	Goi Wahyudi"<<endl;
cout<<"Nim	=	171011402171"<<endl;
cout<<"Kelas	=	02TPLE027"<<endl;
cout<<"============================================="<<endl;

break;
case 9:
cout<<"Nama	=	Nur Ibnu Sina"<<endl;
cout<<"Nim	=	171011402170"<<endl;
cout<<"Kelas	=	02TPLE027"<<endl;
cout<<"============================================="<<endl;
break;
		
		
return(0);
		}
	}

