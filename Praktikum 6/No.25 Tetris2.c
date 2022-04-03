// Muhammad Naufal - 24060120140157
// No.25 Tetris2

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
