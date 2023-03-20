// Nama File : FrekNilTabel.c
// Deskripsi : Menampilkan nilai elemen tabel T yang kemunculannya lebih dari 1 kali
// Pembuat   : Sherli Arninda
// NIM       : 24060122120028
// Tanggal   : 20 Maret 2023

#include <stdio.h>
#include <stdlib.h>

int FrekNilTabel(void){

    int *T; // Pointer ke integer
    int i,j; // Counter
    int frek; // Menghitung banyaknya Element yang sama
    int N; // Jumlah Element Array

    printf("Masukkan nilai N : ");
    scanf("%d",&N);

    T = (int*)malloc(N*sizeof(int));

    if(N <= 0){
        printf("Masukkan tidak boleh nol/negatif");
    }
    else {
        for(i=0;i<N;i++){
            printf("Masukkan data : ");
            scanf("%d",T+i);
        }

        for (i=0;i<N;i++){
            frek = 1;
            for(j=i+1;j<N;j++){
                if(T[i] == T[j] && T[j] != 0){
                    frek = frek + 1;
                    T[j] = 0;
                }
            }
            if (frek > 1){
                printf("%d",T[i]);
            }
        }
        free(T);
    }
    return 0;
}
