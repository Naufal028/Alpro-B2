// Muhammad Naufal - 24060120140157
// No.19 CekPrima

#include <stdio.h>
#include <stdlib.h>

int main(){
	//Kamus
	int Bil, i, Sum;
	
	//Algoritma
	printf("Masukkan Bilangan : ");
	scanf("%d", &Bil);
	//printf("\nFaktor Bilangan Adalah : ");
	Sum = 0;
	if (Bil == 1 || Bil == 2){
		printf("\nBukan Bilangan Prima");
	} else {
		for (i = 1; i <= Bil; i++){
			if (Bil % i == 0){
				Sum = Sum + i;
			}
		}
		if (Sum == (Bil + 1)){
			printf("\nAdalah Bilangan Prima");
		} else {
			printf("\nBukan Bilangan Prima");
		}
	}
}
