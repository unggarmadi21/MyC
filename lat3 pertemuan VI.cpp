#include<stdio.h>
#include<ctype.h>

main()
{
	int nomer, bagi, sisa=0;
	char chrpilihan;
	do{
		printf("Masukan suatu bilangan	:"); scanf("%d", &nomer);
		printf("Masukan bilangan pembagi (2/3/4/5)	:"); scanf("%d", &bagi);
		printf("Bilangan yang dipilih	: %d\n", nomer);
		printf("Bilangan pembagi	: %d\n", bagi);
		sisa = nomer%bagi;
		if (sisa == 0){
			printf("Sisa bagi : tidak ada\n");
		}else {
			printf("Sisa bagi :%d\n", sisa);
		}
		printf("\nApakah anda ingin meneruskan ? (y/n)	:");
		scanf("%c", &chrpilihan);
	}
	while(toupper(chrpilihan) =='y');
}
