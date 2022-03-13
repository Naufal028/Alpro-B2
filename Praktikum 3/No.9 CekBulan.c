/*Nama File 	: No.9 CekBulan*/
/*Deskripsi 	: Menentukan dan menampilkan bulan berdasarkan input nomor*/
/*Pembuat   	: 24060120140157 - Muhammad Naufal*/
/*Tgl Pembuatan	: 13 Maret 2021*/

#include <stdio.h>
#include <stdlib.h>

int main(){
	
	//Kamus
	int Bulan;
	
	//Algoritma
	printf("Masukkan Nilai Bulan : ");
	scanf("%d", &Bulan);
	if (Bulan == 1){
		printf("Bulan Januari");
	}
	else if (Bulan == 2){
		printf("Bulan Februari");
	}
	else if (Bulan == 3){
		printf("Bulan Maret");
	}
	else if (Bulan == 4){
		printf("Bulan April");
	}
	else if (Bulan == 5){
		printf("Bulan Mei");
	}
	else if (Bulan == 6){
		printf("Bulan Juni");
	}
	else if (Bulan == 7){
		printf("Bulan Juli");
	}
	else if (Bulan == 8){
		printf("Bulan Agustus");
	}
	else if (Bulan == 9){
		printf("Bulan September");
	}
	else if (Bulan == 10){
		printf("Bulan Oktober");
	}
	else if (Bulan == 11){
		printf("Bulan November");
	}
	else if (Bulan == 12){
		printf("Bulan Desember");
	}
	else {
		printf("Masukan Nilai Bulan Tidak Tepat");
	}
}
