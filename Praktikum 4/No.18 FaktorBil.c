/*Nama File 	: No.18 FaktorBil*/
/*Deskripsi 	: Menentukan faktor-faktor sebuah bilangan*/
/*Pembuat   	: 24060120140157 - Muhammad Naufal*/
/*Tgl Pembuatan	: 20 Maret 2021*/

#include <stdio.h>
#include <stdlib.h>

int main(){
	//Kamus
	int Bil, i;
	
	//Algoritma
	printf("Masukkan Bilangan : ");
	scanf("%d", &Bil);
	printf("\nFaktor Bilangan Adalah : ");
	
	for (i = 1; i <= Bil; i++){
		if (Bil % i == 0){
			printf("%d, ", i);
		}
	}
}
