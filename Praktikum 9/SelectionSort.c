/*Nama File 	: SelectionSort.c*/
/*Deskripsi 	: Mengurutkan 10 bilangan menggunakan Selection Sort*/
/*Pembuat   	: 24060120140157 - Muhammad Naufal*/
/*Tgl Pembuatan	: 8 Mei 2021*/

#include <stdio.h>
#include <stdlib.h>

void SelSort(int arr[], int n);
void PrintArray(int arr[], int n);

void SelSort(int arr[], int n){
	
	//Kamus Lokal
	int i;
	int j;
	int min;
    int temp;
    
	//Algoritma
    for (i = 0; i < n-1; i++){
        min = i;
        for (j = i + 1; j < n; j++)
          if (arr[j] < arr[min])
            min = j;
        temp = arr[min];
        arr[min] = arr[i];
        arr[i] = temp;
    }
}

void PrintArray(int arr[], int n){
	
	//Kamus Lokal
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
	SelSort(A, n);
	PrintArray(A, n);
}
