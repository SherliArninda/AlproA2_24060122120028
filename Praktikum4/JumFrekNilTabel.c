// Nama File : JumFrekNilTabel.c
// Deskripsi : Menjumlahkan nilai elemen tabel T yang kemunculannya lebih dari 1 kali
// Pembuat   : Sherli Arninda
// NIM       : 24060122120028
// Tanggal   : 20 Maret 2023

#include <stdio.h>
#include <stdlib.h>

int JumFrekNilTabel(void){

    int *T; // Pointer ke Integer
    int i,j; // Counter
    int sum; // Menjumlahkan Element
    int N; // Jumlah Element pada Array T

    sum = 0;
    T = (int*)malloc(N*sizeof(int));

    printf("Masukkan N : ");
    scanf("%d",&N);

    if (N <= 0){
        printf("Masukkan harus positif");
    }
    else {
        for(i=0;i<N;i++){
            scanf("%d",T+i);
        }

        for(i=0;i<N;i++){
            for(j=0;j<N;j++){
                if((T[i] == T[j]) && (i != j)){
                    sum = sum + T[i];
                }
            }
        }
        printf("%d",sum);
        free(T);
    }
    return 0;
}
