// Muhammad Naufal - 24060120140157
// No.18 FaktorBil

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
