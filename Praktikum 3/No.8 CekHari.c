// Muhammad Naufal -24060120140157
// No.8 CekHari

#include <stdio.h>
#include <stdlib.h>


int main() {
	//Kamus
	int Hari;
	
	//Algoritma
	printf("Masukkan Nilai Hari : ");
	scanf("%d", &Hari);
	if (Hari == 1){
		printf("Hari Senin");
	}
	else if (Hari == 2){
		printf("Hari Selasa");
	}
	else if (Hari == 3){
		printf("Hari Rabu");
	}
	else if (Hari == 4){
		printf("Hari Kamis");
	}
	else if (Hari == 5){
		printf("Hari Jumat");
	}
	else if (Hari == 6){
		printf("Hari Sabtu");
	}
	else if (Hari == 7){
		printf("Hari Minggu");
	}
	else {
		printf("Masukan Nilai Hari Tidak Tepat");
	}
	
	return 0;
}
