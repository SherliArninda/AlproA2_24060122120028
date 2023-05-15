/*Nama File : Descending */
/*Nama Pembuat : Sherli Arninda */
/*NIM: 24060122120028*/
/*Tanggal : 11 Mei 2023 */
/*Deskripsi : Mengurutkan secara descending atau dari yang paling besar ke paling kecil*/

#include<stdio.h>
#include<stdlib.h>

int main() {
    //kamus lokal
      int T[10] = {1,8,7,3,2,5,4,6,0,9};
      int n = 10;
      int i,j;
      int temp;

    //algoritma
      printf("Sebelum diurutkan : ");
      for(i=0; i<n; i++) {
        printf("%d ", T[i]);
      }

    //Pengurutan secara descending
      for(i=0; i<n; i++) {
        for(j=i+1; j<n; j++) {
          if(T[i] < T[j]) {
            int temp = T[i];
            T[i] = T[j];
            T[j] = temp;
          }
        }
      }
      printf("\n====================================");
      printf("\nSetelah diurutkan secara descending: ");
      for(i=0; i<n; i++) {
        printf("%d ", T[i]);
      }

    return 0;
}


