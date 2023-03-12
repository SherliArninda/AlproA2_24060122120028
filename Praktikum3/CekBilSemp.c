/*
Nama Program  : CekBilSemp.c
Deskripsi     : Menentukan suatu bilangan termasuk bilangan sempurna atau bukan
Nama Pembuat  : Sherli Arninda
NIM           : 24060122120028
Tanggal       : 07 Maret 2023
*/
#include <stdio.h>
#include <stdlib.h>

int CekBilSemp(void)
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
         for(i=1; i<N; i++){
            if (N % i == 0){
                k = k+i;
            }
        }
        if(k==N){
            printf("bilangan sempurna");
        }else{
            printf("bukan bilangan sempurna");
        }
    }

    return 0;
}





