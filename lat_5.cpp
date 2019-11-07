#include<iostream>
#include<string.h>
using namespace std;
main()
{
	cout<<"Nama	: Unggar Madi"<<endl;
	cout<<"Nim	: 171011402176"<<endl;
	cout<<"Kelas	: 02TPLE027"<<endl;
	cout<<"=========================================="<<endl; 
	int i;
	cout<<"Ganjil	:"<<" ";
	for (i=1;i<=36;i+=2)
	{
	if (i==2)continue;
			cout<<i<<" ";
		if(i==40)break;
		
	}
	cout<<"....";
	cout<<endl;
	
	cout<<"Genap	:"<<" ";
	for (i=2;i<35;i+=2)
	{
	if (i==1)continue;
			cout<<i<<" ";
		if(i==40)break;
}
cout<<"....";
}

