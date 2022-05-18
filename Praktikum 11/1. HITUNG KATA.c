#include<stdio.h>
#include<conio.h>
#include"mesinint.c"
#include"mesinkar.c"

void HitungKata(){
	// Kamus
	int a;
	
	// Algoritma
	a = 0;
	START();
	while(!EOP()){
		a = a + 1;
		ADV();
	}
	printf("Jumlah karakter : %d", a);
	getch();
}

int main(){
	HitungKata();
	return 0;
}
