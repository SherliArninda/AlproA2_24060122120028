/*
Nama Program  : FaktorBil.c
Deskripsi     : Menampilkan faktor bilangan dari N
Nama Pembuat  : Sherli Arninda
NIM           : 24060122120028
Tanggal       : 07 Maret 2023
*/
#include <stdio.h>
#include <stdlib.h>

int CekBilPrima(void)
{
    //kamus lokal
    int N;
    int i;
    int k=0;
    //algoritma
    printf("Masukkan bilangan N = ");
    scanf("%d",&N);

    if(N<=0){
        printf("Bilangan harus positif");
    }else{
        for(i=1; i<=N; i++){
            if (N % i == 0){
                k = k+1;
            }
        }
        if(k==2){
            printf("bilangan prima");
        }else{
            printf("bukan bilangan prima");
        }
    }

    return 0;
}




