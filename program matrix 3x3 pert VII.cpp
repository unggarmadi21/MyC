#include<iostream>
#include<stdio.h>
#include<iomanip>

using namespace std;
int main()
{
	cout<<"Nama 	: Unggar Madi"<<endl;
	cout<<"Nim	: 171011402176"<<endl;
	cout<<"Kelas	: 02TPLE027"<<endl;
	cout<<"==============================="<<endl;
	int a[3][3];
	int i,j;
		cout<<"Masukan data matrik 3x3	="<<endl;
		cout<<endl;
		for (i=0;i<3;i++)
		{
			for (j=0;j<3;j++)
			{
				cout<<"Elemen ke = "<<(i+1)<<","<<(j+1)<<" : ";
				cin>>a[i][j];
			}
		}
		cout<<"Matrix 3x3	="<<endl<<endl;
		for (int i=0;i<3;i++)
		{
			for (int j=0;j<3;j++)
			{
				cout<<setw(4)<<a[i][j]<<"";
				
			}
			cout<<endl;
		}
		return(0);
		
}
