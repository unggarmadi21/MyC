#include<iostream>
#include<string.h>
#include<stdlib.h>
using namespace std;
struct movies_t
{
	char title [50];
	int year;
}	mine, yours;

void printfmovie (movies_t movie);
int main()
{
	char buffer [50];
	strcpy (mine.title, "					2001 A Space Odyssey");
	mine.year = 1968;
	cout<<"Nama	=	Unggar madi"<<endl;
	cout<<"Nim	=	171011402176"<<endl;
	cout<<"Kelas	=	02TPLE027"<<endl;
	cout<<"=========================================="<<endl;
	cout<<endl;
	cout<<"Masukan judul film favorit	= ";
	cin.getline(buffer,50);
	yours.year = atoi (buffer);
	cout<<"Judul film favorit yang ada	=\n";
	printfmovie (mine);
	cout<<"Judul film favorit kamu adalah	=\n";
	printfmovie (yours);
	return 0; 
}
void printfmovie (movies_t movie)
{
	cout<<movie.title;
	cout<<"("<<movie.year<<")\n";
}
