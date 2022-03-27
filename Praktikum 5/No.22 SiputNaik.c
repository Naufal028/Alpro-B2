/*Nama File 	: No.22 SiputNaik*/
/*Deskripsi 	: Menghitung berapa hari yang dibutuhkan oleh sebuah siput untuk mencapai ketinggian tertentu*/
/*Pembuat   	: 24060120140157 - Muhammad Naufal*/
/*Tgl Pembuatan	: 27 Maret 2021*

#include <stdio.h>
#include <stdlib.h>

int main(){
	//Kamus
	int N;
	float i, Hari;
	
	//Algoritma
	printf("Masukkan Bilangan : ");
	scanf("%d", &N);
	
	i = 0;
	Hari = 0;
	if (N < 0){
		printf("\nMasukan Nilai Salah");
	} else {
		while(i != N && i < N){
			i = i + 0.3;
			Hari = Hari + 0.5;
			if (i != N && i < N){
				i = i - 0.1;
				Hari = Hari + 0.5;
			}
		}
		printf("Dibutuhkan %f Hari", Hari);
	}
	return 0;
}
