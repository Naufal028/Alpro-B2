// Muhammad Naufal - 24060120140157
// No.20 CekSempurna

#include <stdio.h>
#include <stdlib.h>

int main(){
	//Kamus
	int Bil, Sum, i;
	
	//Algoritma
	printf("Masukkan Bilangan : ");
	scanf("%d", &Bil);
	
	Sum = 0;
	for (i=1; i < Bil; i++){
		if (Bil % i == 0){
			Sum = Sum + i;
		}
	}
	if (Bil == Sum){
		printf("\nAdalah Bilangan Sempurna");
	} else {
		printf("\nBukan Bilangan Sempurna");
	}
}
