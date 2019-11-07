  #include<iostream>
#include<stdio.h>
#include<conio.h>
using namespace std;
 int main()
{
	int uang;
	int a, a1, b, b1, c, c1, d, d1, e, e1, f, f1, g, g1, h, h1, i, i1;
	cout<<"Nama	=	Unggar madi"<<endl;
	cout<<"Nim	=	171011402176"<<endl;
	cout<<"Kelas	=	02TPLE027"<<endl;
	cout<<"=========================================="<<endl;

	cout<<"Masukan Jumlah Uang Kembalian	=";
	cin>>uang;
	a=uang%50000;
	a1=uang/50000;
	b=a%20000;
	b1=a/20000;
	c=b%10000;
	c1=b/10000;
	d=c%5000;
	d1=c/5000;
	e=d%2000;
	e1=d/2000;
	f=e%1000;
	f1=e/1000;
	g=f%500;
	g1=f/500;
	h=g%200;
	h1=g/200;
	i=h%100;
	i1=h/100;
	cout<<a1<<"Lembar Rp. 50000"<<endl;
	cout<<b1<<"Lembar Rp. 20000"<<endl;
	cout<<c1<<"Lembar RP. 10000"<<endl;
	cout<<d1<<"Lembar Rp. 5000"<<endl;
	cout<<e1<<"Lembar Rp. 2000"<<endl;
	cout<<f1<<"Lembar Rp. 1000"<<endl;
	cout<<g1<<"Lembar Rp. 500"<<endl;
	cout<<h1<<"Lembar Rp. 200"<<endl;
	cout<<i1<<"Lembar Rp. 100"<<endl;
	
	getch();
}
