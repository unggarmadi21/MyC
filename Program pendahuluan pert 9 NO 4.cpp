#include<iostream>
#include<stdlib.h>
#include<cstring>
#include<iomanip>
using namespace std;
char *entry,letter,choice[2];
int ascii, len, binary[8], total;
void prog ();

int main()
	
{
	prog ();
	return 0;
	
}
void prog()
{
	entry = new char [500];
	cout<<"Nama	=	Unggar madi"<<endl;
	cout<<"Nim	=	171011402176"<<endl;
	cout<<"Kelas	=	02TPLE027"<<endl;
	cout<<"=========================================="<<endl;

	cout<<"Masukan kalimat yang ingin di konversi (sampai 500 huruf)	:"<<" ";
	cin.getline(entry,500);
	len = strlen (entry);
	for (int i = 0;i<len;i++)
	{
		total = 0;
		letter = entry[i];
		ascii = letter;
		while (ascii>0)
		{
			if((ascii%2)==0)
			{
				binary [total]==0;
				ascii = ascii/2;
				total++;
			}
			else
			{
				binary [total] = 1;
				ascii = ascii/2;
				total++;
			}
		}
		total--;
		while (total>=0)
		{
			cout<<binary[total];
			total--;
		}
	}
	delete[] entry;
	cout<<endl;
	cout<<endl<<"Akan diulangi lagi (1 = ya, 2 = tidak) ?	:";
	cin.getline(choice, 3);
	if (choice[0]=='1')
	{
		prog();
	}
	else
	{
		exit(0);
	}
}
