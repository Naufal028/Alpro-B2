// Muhammad Naufal - 24060120140157
// No.17 TarifPLN

#include <stdio.h>
#include <stdlib.h>

int main(){
	//Kamus
	int Gol, Daya, Tarif;
	
	//Algoritma
	printf("Masukkan Golongan : ");
	scanf("%d", &Gol);
	printf("\nMasukkan Jumlah Daya : ");
	scanf("%d", &Daya);
	printf("\n");
	
	if (Gol == 1){
		if (Daya < 1000 && Daya > 100){
			Tarif = 1000 * Daya;
			printf("Tarif Biaya Listrik = %d", Tarif);
		} else if (Daya < 100){
			Tarif = 1000 * 100;
			printf("Tarif Biaya Listrik = %d", Tarif);
		} else {
			Tarif = 1000 * Daya * 1.1;
			printf("Tarif Biaya Listrik = %d", Tarif);
		}
	} else if (Gol == 2){
		if (Daya < 1000 && Daya > 100){
			Tarif = 2000 * Daya;
			printf("Tarif Biaya Listrik = %d", Tarif);
		} else if (Daya < 100){
			Tarif = 2000 * 100;
			printf("Tarif Biaya Listrik = %d", Tarif);
		} else {
			Tarif = 2000 * Daya * 1.1;
			printf("Tarif Biaya Listrik = %d", Tarif);
		}
	} else {
		printf("Masukkan Golongan Tidak Benar");
	}
}
