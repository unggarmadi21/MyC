#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

main()
{
	char nomor[6],nama [25];
	float gapok, lembur, tunjangan, gatot;
	printf("Nama	=	Unggar madi \n");
	printf("Nim	=	171011402176 \n");
	printf("Kelas	=	02TPLE027 \n");
	printf("========================================== \n");
	printf("Masukan Nomor Pegawai	= ");
	gets(nomor);
	printf("Masukan Nama Pegawai	= ");
	gets(nama);
	printf("Gaji Pokok	= ");
	scanf("%f",&gapok);
	printf("Jumlah Jam Lembur	= ");
	scanf("%f,",&lembur);
	printf("Tunjangan	=");
	scanf("%f",&tunjangan);
	
	lembur=(0.03*gapok);
	tunjangan=(0.15*gapok);
	gapok=(0.15*(gapok+lembur));
	gatot=(gapok+tunjangan+lembur);
	puts("\n");
	printf("Gaji Pokok	= %2.2f \n",gapok);
	printf("Tunjangan	= %2.2f\n",tunjangan);
	printf("Upah Lembur	= %2.2f \n",lembur);
	printf("============================= = \n");
	printf("TOTAL GAJI	= %2.2f",gatot);
	
	getch();
	return 0;
	
}






