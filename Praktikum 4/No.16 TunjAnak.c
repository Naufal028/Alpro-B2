// Muhammad Naufal - 24060120140157
// No.16 TunjAnak

#include <stdio.h>
#include <stdlib.h>

int main(){
	//Kamus
	int Anak, Gaji, Hasil;
	
	//Algoritma
	printf("Masukkan Jumlah Anak : ");
	scanf("%d", &Anak);
	printf("\nMasukkan Jumlah Gaji Pokok : ");
	scanf("%d", &Gaji);
	printf("\n");
	
	if (Anak > 0 && Anak <= 3){
		Hasil = Anak * (Gaji / 10);
		printf("Tunjangan Anak : %d",Hasil);
	}
	else if (Anak > 3){
		Hasil = 3 * (Gaji / 10);
		printf("Tunjangan Anak : %d",Hasil);
	}
	else {
		printf("Masukan Anak Tidak Benar");
	}
}
