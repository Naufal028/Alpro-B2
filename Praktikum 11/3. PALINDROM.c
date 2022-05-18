#include <stdio.h>
#include <conio.h>
#include <stdbool.h>
#include"mesinint.c"
#include"mesinkar.c"

int Palindrom(){
	// Kamus
	int i;
	int j;
	char arr[50];
	bool Check;
	
	// Algoritma
	Check = true;
	i = 0;
	START();
	while(!EOP()){
		arr[i] = CC;
		i = i + 1;
		ADV();
	}
	j = 0;
	for(i=i-1; i >= 0; i--){
		if (arr[i] != arr[j]){
			Check = false;
		}
		j = j + 1;
	}
	return Check;
	getch();
}

int main(){
	bool a;
	
	a = Palindrom();
	if (a == true){
		printf("Adalah Kata Palindrom");
	} else {
		printf("Bukan Kata Palindrom");
	}
	return 0;
}
