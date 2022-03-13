/*Nama File 	: No.10 CekSeriPositif*/
/*Deskripsi 	: Memeriksa apakah semua masukan positif atau tidak*/
/*Pembuat   	: 24060120140157 - Muhammad Naufal*/
/*Tgl Pembuatan	: 13 Maret 2021*/

#include <stdio.h>
#include <stdlib.h>

int main(){
	
	//Kamus
	int a,b,c;
	
	//Algoritma
	printf("Masukkan Nilai Tahanan");
	printf("\n A = ");
	scanf("%d", &a);
	printf("\n B = ");
	scanf("%d", &b);
	printf("\n C = ");
	scanf("%d", &c);
	if (a > 0 && b > 0 && c > 0){
		printf("Masukan Tahanan Semuanya Positif");
	}
	else {
		printf("Masukan Tahanan Tidak Boleh Negatif");
	}
	return 0;
}
