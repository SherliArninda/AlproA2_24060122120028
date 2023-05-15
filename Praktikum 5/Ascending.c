/*Nama File : Ascending */
/*Nama Pembuat : Sherli Arninda */
/*NIM: 24060122120028*/
/*Tanggal : 11 Mei 2023 */
/*Deskripsi : Mengurutkan secara ascending atau dari yang paling kecil ke paling besar*/

#include<stdio.h>
#include<stdlib.h>

int main() {
    //kamus lokal
    int T[10] = {4,6,2,8,1,10,5,9,3,7};
    int n = 10;
    int i,j;
    int temp;

    //algoritma
    printf("Sebelum diurutkan: ");
    for(i=0; i<n; i++) {
        printf("%d ", T[i]);
    }

    // Bubble sort secara ascending
    for(i=0; i<n-1; i++) {
        for(j=0; j<n-i-1; j++) {
            if(T[j] > T[j+1]) {
                temp = T[j];
                T[j] = T[j+1];
                T[j+1] = temp;
            }
        }
    }

    printf("\n====================================");
    printf("\nSetelah diurutkan secara ascending: ");
    for(i=0; i<n; i++) {
        printf("%d ", T[i]);
    }

    return 0;
}

