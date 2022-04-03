// Muhammad Naufal - 24060120140157
// No.23 Tetris

#include <stdio.h>
#include <stdlib.h>

int main(){
	//Kamus
	int i, j, Bil, Sum;
	
	//Algoritma
	printf("Masukkan Bilangan : ");
	scanf("%d", &Bil);
	
	Sum = 0;
	for(i = 1; i <= Bil; i++){
		Sum = Sum + 1;
		for (j = 1; j <= Sum; j++){
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
