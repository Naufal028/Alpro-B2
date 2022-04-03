/*Nama File 	: No.19 CekPrima*/
/*Deskripsi 	: Membentuk susunan karakter ‘*’ sesuai deret bilangan 1 + 2 + 3 + 4 + 5 + … + N*/
/*Pembuat   	: 24060120140157 - Muhammad Naufal*/
/*Tgl Pembuatan	: 3 April 2021*/

#include <stdio.h>
#include <stdlib.h>

int main(){
	//Kamus
	int i, j, Bil, Sum;
	
	//Algoritma
	printf("Masukkan Bilangan : ");
	scanf("%d", &Bil);
	
	Sum = 0;
	for(i = 1; i <= Bil; i++){
		Sum = Sum + 1;
		for (j = 1; j <= Sum; j++){
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
