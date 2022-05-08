/*Nama File 	: InsertionSort.c*/
/*Deskripsi 	: Mengurutkan 10 bilangan menggunakan Insertion Sort*/
/*Pembuat   	: 24060120140157 - Muhammad Naufal*/
/*Tgl Pembuatan	: 8 Mei 2021*/

#include <stdio.h>
#include <stdlib.h>

void InsSort(int arr[], int n);
void PrintArray(int arr[], int n);

void InsSort(int arr[], int n){
	
	//Kamus Lokal
	int i;
	int j;
	int key;
	
	//Algoritma
    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

void PrintArray(int arr[], int n){
	
	// Kamus Lokal
	int i;
	
	//Algoritma
	printf("Isi Array : ");
    for (i = 0; i < n; i++)
        printf("%d, ", arr[i]);
    printf("\n");
}

int main(){
	//Kamus
	int A[10] = {4,7,2,3,8,1,5,10,9,6};
	int n = 10; //Jumlah Bilangan
	
	//Algoritma
	InsSort(A, n);
	PrintArray(A, n);
}
