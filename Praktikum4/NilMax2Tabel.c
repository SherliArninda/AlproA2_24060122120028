// Nama File : NilMax2Tabel.c
// Deskripsi : Menampilkan nilai max ke 2 dari suatu array
// Pembuat   : Sherli Arninda
// NIM       : 24060122120028
// Tanggal   : 20 Maret 2023

#include <stdio.h>
#include <stdlib.h>

int NilMax2Tabel(void){

    //kamus
    int *T; // tabel array
    int i; //counter
    int n; //banyak inputan
    int elmt; //isi tabel
    int max1; //terbesar ke1
    int max2; // terbesar ke2

    //algoritma
    printf("Masukkan bilangan N: ");
    scanf("%d", &n);

    if(n<0){
        printf("Bilangan harus positif");
    }else{
        T = (int*)malloc(n*(sizeof(int)));
        for(i=0; i<n; i++){
            printf("Masukkan nilai ke-%d = ", i);
            scanf("%d", &elmt);
            if(elmt>0){
                T[i]=elmt;
            }else{
                i--;
            }
        }
        max1 = T[0];
        for (i=1; i<n; i++){
            if (T[i] > max1 ){
                max2 = max1;
                max1 = T[i];
            }else if(T[i]>max2 && T[i]<max1){
                max2 = T[i];
            }
        }
        printf("Bilangan terbesar kedua = %d", max2);
    }

    return 0;
}

