/*Nama File : Ascending */
/*Nama Pembuat : Sherli Arninda */
/*NIM: 24060122120028*/
/*Tanggal : 11 Mei 2023 */
/*Deskripsi : Mengurutkan secara ascending atau dari yang paling kecil ke paling besar*/
#include <stdio.h>

void swap(int *a, int *b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}

void selectionSort(int array[], int size) {
  for (int step = 0; step < size - 1; step++) {
    int IMin = step;
    for (int i = step + 1; i < size; i++) {
      if (array[i] < array[IMin])
        IMin = i;
    }
    swap(&array[IMin], &array[step]);
  }
}

void printArray(int array[], int size) {
  for (int i = 0; i < size; ++i) {
    printf("%d  ", array[i]);
  }
  printf("\n");
}

int main() {
  int data[] = {20, 12, 10, 15, 2};
  int size = sizeof(data) / sizeof(data[0]);
  selectionSort(data, size);
  printf("Sorted array in Acsending Order:\n");
  printArray(data, size);
}

