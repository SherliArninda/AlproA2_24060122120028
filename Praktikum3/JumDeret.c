/*
Nama Program  : BilInteger.c
Deskripsi     : Menghitung jumlah total deret bilangan
Nama Pembuat  : Sherli Arninda
NIM           : 24060122120028
Tanggal       : 07 Maret 2023
*/
#include <stdio.h>
#include <stdlib.h>

int JumDeret(void)
{
    //kamus lokal
    int N; //banyak bilangan yang dimasukkan
    int i; // counter
    int k=0;
    //algoritma
    printf("Masukkan bilangan N : ");
    scanf("%d", &N);

    if (N<0){
        printf("bilangan harus +");
    }else{

        for (i=1; i<=N; i++){
            k = k + i;
        }
        printf("%d",k);
        printf("\n");
    }




    return 0;
}


