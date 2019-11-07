#include<iostream>
#include<string.h>
#include<stdio.h>
#include<iomanip>

using namespace std;
int main(void)

{
	cout<<"Nama	: Unggar Madi"<<endl;
	cout<<"Nim	: 171011402176"<<endl;
	cout<<"Kelas	: 02TPLE027"<<endl;
	cout<<"=========================================="<<endl; 
	
	char destination[25];
	char blank [10]={":"},blank2[10]={":"},in[5]={":"},nama[50],hobbi[50],nm[10]={"Nama"},hb[10]={"Hobbi"};
	cout<<"Masukan Nama	= ";
	cin>>nama;
	cout<<"Masukan Hobbi	= ";
	cin>>hobbi;
	cout<<"============================="<<endl;
	cout<<"Nama	= "<<nama<<endl;
	strcpy(destination,nm);
	strcat(destination,nama);
	strcat(destination,in);
	strcat(destination,hb);
	strcat(destination,blank2);
	strcat(destination,hobbi);
	cout<<"Hobbi	= "<<hobbi;
	return(0); 	
}
