/*
Nama Program  : FaktorBil.c
Deskripsi     : Menampilkan faktor bilangan dari N
Nama Pembuat  : Sherli Arninda
NIM           : 24060122120028
Tanggal       : 07 Maret 2023
*/
#include <stdio.h>
#include <stdlib.h>

int FaktorBil(void)
{
    //kamus lokal
    int N; //banyak bilangan yang dimasukkan
    int i; //counter
    //algoritma
    printf("Masukkan bilangan N = ");
    scanf("%d",&N);

    if(N<0){
        printf("Bilangan harus positif");
    }else{
        for(i=1; i<=N; i++){
            if(N % i == 0){
                printf("%d",i);
                printf("\n");
            }
        }
    }

    return 0;
}



