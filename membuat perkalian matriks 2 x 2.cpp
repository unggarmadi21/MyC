#include<iostream>
#include<stdio.h>
#include<iomanip>

using namespace std;
int main()
{
	cout<<"Nama 	:	Unggar Madi"<<endl;
	cout<<"Nim		:	171011402176"<<endl;
	cout<<"Kelas	:	02TPLE027"<<endl;
	cout<<"==============================="<<endl;
	int a[2][2];
	int i,j;
		cout<<"Masukan data matrik 2x2	="<<endl;
		cout<<endl;
		switch (i)
		for ( i=0;i<2;i++)
		{
		 for ( j=0;j<2;j++)
			{
				cout<<"Elemen ke = "<<(i+1)<<","<<(j+1)<<" : ";
				cin>>a[i][j];
			}
		}
		cout<<"Matrix 2x2	="<<endl<<endl;
		for ( i=0;i<2;i++)
		{
			for ( j=0;j<2;j++)
			{
				cout<<setw(2)<<a[i][j]<<" ";
				
			}
			cout<<endl;
		}
		return(0);
		
}
