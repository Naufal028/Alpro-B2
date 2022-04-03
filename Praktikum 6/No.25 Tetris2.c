/*Nama File 	: No.25 Tetris2*/
/*Deskripsi 	: Membentuk susunan karakter ‘*’ sesuai deret bilangan 1, 2, …, N, …, 2, 1*/
/*Pembuat   	: 24060120140157 - Muhammad Naufal*/
/*Tgl Pembuatan	: 3 April 2021*/

#include <stdio.h>
#include <stdlib.h>

int main(){
	//Kamus
	int i, j, k, l, m, Bil, Sum;
	
	//Algoritma
	printf("Masukkan Bilangan : ");
	scanf("%d", &Bil);
	
	Sum = 0;
	for(i = 1; i < Bil; i++){
		Sum = Sum + 1;
		for (j = 1; j <= Sum; j++){
			printf("*");
		}
		printf("\n");
	}
	
	Sum = Bil;
	for(l = Bil; l >= 1; l--){
		for (m = 1; m <= Sum; m++){
			printf("*");
		}
		Sum = Sum - 1;
		printf("\n");
	}
	
	return 0;
}
