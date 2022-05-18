/*Nama File 	: 2. INVERSE.c*/
/*Deskripsi 	: Menmbalikkan urutan karakter pada mesin karakter*/
/*Pembuat   	: 24060120140157 - Muhammad Naufal*/
/*Tgl Pembuatan	: 18 Mei 2021*/

#include<stdio.h>
#include<conio.h>
#include"mesinint.c"
#include"mesinkar.c"

void Inverse(){
	// Kamus
	int i;
	int j;
	char arr[50];
	
	// Algoritma
	i = 0;
	START();
	while(!EOP()){
		arr[i] = CC;
		i = i + 1;
		ADV();
	}
	for(j=i; j >= 0; j--){
		printf("%c", arr[j]);
	}
	printf(".");
	getch();
}

int main(){
	
	Inverse();
	return 0;
}
