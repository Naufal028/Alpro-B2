// Muhammad Naufal - 24060120140157
// No.24 Tetris1

#include <stdio.h>
#include <stdlib.h>

int main(){
	//Kamus
	int i, j, Bil, Sum;
	
	//Algoritma
	printf("Masukkan Bilangan : ");
	scanf("%d", &Bil);
	
	Sum = Bil;
	for(i = Bil; i >= 1; i--){
		for (j = 1; j <= Sum; j++){
			printf("*");
		}
		Sum = Sum - 1;
		printf("\n");
	}
	return 0;
}
