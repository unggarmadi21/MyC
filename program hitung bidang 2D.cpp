#include <iostream>
using namespace std;

int main()
{
	float d1, d2, a, b, t, p, l, alas, s, r, tinggi, Pi = 3.14;
	int pilihan;
	char jawab;
	
	awal :
	cout << "==================================" << endl;
	cout << "===| Program matriks 2 x 2 dan biodata mahasiswa |===" << endl;
	cout << "==================================" << endl;
	cout << "1. " << endl;
	cout << "2. Trapesium" << endl;
	cout << "3. Segitiga" << endl;
	cout << "4. Jajar genjang" << endl;
	cout << "5. Persegi" << endl;
	cout << "6. Lingkaran" << endl;
	cout << "==================================" << endl;
	cout << "Masukkan pilihan : ";
	cin >> pilihan;
	cout << "==================================" << endl;
	
	switch(pilihan)
	{
		case 1 : 
			system ("color a");
			cout << "================================" << endl;
			cout << "Menghitung Luas Belah Ketupat" << endl;
			cout << "================================" << endl;
			cout << "Rumus Luas Belah Ketupat : (d1*d2)/2" << endl;
			cout << "Input nilai d1 : ";
			cin >> d1;
			cout << "Input nilai d2 : ";
			cin >> d2;
			cout << "Luas Belah Ketupat = " << (d1*d2) / 2 << endl;
			cout << "\n" << endl;
			
			cout << "Apakah anda ingin menghitung lagi (Y/T) ? ";
			cin >> jawab;
			if (jawab == 'Y' || jawab == 'y'){
				goto awal;
			}
			else if (jawab == 'T' || jawab == 't'){
				goto selesai;
			}
			break;
		
		case 2 :
			system("color b");
			cout << "================================" << endl;
			cout << "Menghitung Luas Trapesium" << endl;
			cout << "================================" << endl;
			cout << "Rumus Luas Trapesium : (a*b)/2 * t" << endl;
			cout << "Input nilai a : ";
			cin >> a;
			cout << "Input nilai b : ";
			cin >> b;
			cout << "Input nilai t : ";
			cin >> t;
			cout << "Luas Trapesium = " << (a*b)/2 * t << endl;
			cout << "\n" << endl;
			
			cout << "Apakah anda ingin menghitung lagi (Y/T) ? ";
			cin >> jawab;
			if (jawab == 'Y' || jawab == 'y'){
				goto awal;
			}
			else if (jawab == 'T' || jawab == 't'){
				goto selesai;
			}
			break;
			
		case 3 :
			system ("color c");
			cout << "================================" << endl;
			cout << "Menghitung Luas Segitiga" << endl;
			cout << "================================" << endl;
			cout << "Rumus Luas Segitiga : (a*t)/2" << endl;
			cout << "Input nilai alas : ";
			cin >> alas;
			cout << "Input nilai tinggi : ";
			cin >> tinggi;
			cout << "Luas Segitiga = " << (alas * tinggi) / 2 << endl;
			cout << "\n" << endl;
			
			cout << "Apakah anda ingin menghitung lagi (Y/T) ? ";
			cin >> jawab;
			if (jawab == 'Y' || jawab == 'y'){
				goto awal;
			}
			else if (jawab == 'T' || jawab == 't'){
				goto selesai;
			}
			break;
		
		case 4 : 
			system ("color d");
			cout << "================================" << endl;
			cout << "Menghitung Luas Jajar Genjang" << endl;
			cout << "================================" << endl;
			cout << "Rumus Luas Jajar Genjang : a * t" << endl;
			cout << "Input nilai alas : ";
			cin >> alas;
			cout << "Input nilai tinggi : ";
			cin >> tinggi;
			cout << "Luas Jajar Genjang = " << alas * tinggi << endl;
			cout << "\n" << endl;
			
			cout << "Apakah anda ingin menghitung lagi (Y/T) ? ";
			cin >> jawab;
			if (jawab == 'Y' || jawab == 'y'){
				goto awal;
			}
			else if (jawab == 'T' || jawab == 't'){
				goto selesai;
			}
			break;
			
		case 5 : 
			system ("color e");
			cout << "================================" << endl;
			cout << "Menghitung Luas Persegi" << endl;
			cout << "================================" << endl;
			cout << "Rumus Luas Persegi : s * s" << endl;
			cout << "Input nilai s : " << endl;
			cin >> s;
			cout << "Luas Persegi = " << s * s << endl;
			cout << "\n" << endl;
			
			cout << "Apakah anda ingin menghitung lagi (Y/T) ? ";
			cin >> jawab;
			if (jawab == 'Y' || jawab == 'y'){
				goto awal;
			}
			else if (jawab == 'T' || jawab == 't'){
				goto selesai;
			}
			break;
			
		case 6 : 
			system ("color f");
			cout << "================================" << endl;
			cout << "Menghitung Luas Lingkaran" << endl;
			cout << "================================" << endl;
			cout << "Rumus Luas Lingkaran : Phi * r * r" << endl;
			cout << "Input nilai r : ";
			cin >> r;
			cout << "Luas Lingkaran = " << Pi * r * r << endl;
			cout << "\n" << endl;
			
			cout << "Apakah anda ingin menghitung lagi (Y/T) ? ";
			cin >> jawab;
			if (jawab == 'Y' || jawab == 'y'){
				goto awal;
			}
			else if (jawab == 'T' || jawab == 't'){
				goto selesai;
			}
			break;
		
		default :
			cout << "Maaf, kode yang anda masukkan salah!" << endl;
		
		selesai:
		system ("color b");
		cout << "\n \n";
		cout << "==================================" << endl;
		cout << "Terimakasih Telah Menggunakan Program Ini :)" << endl;
		
	}
	
	system("pause");
}
