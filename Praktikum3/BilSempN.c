/*
Nama Program  : BilSempN.c
Deskripsi     : Menampilkan bilangan sempurna sampai dengan N
Nama Pembuat  : Sherli Arninda
NIM           : 24060122120028
Tanggal       : 07 Maret 2023
*/
#include <stdio.h>
#include <stdlib.h>

int BilSempN(void)
{
    //kamus lokal
    int N;
    int i;
    int j=0;
    int k;
    //algoritma
    printf("Masukkan bilangan N = ");
    scanf("%d",&N);

    if(N<=0){
        printf("Bilangan harus positif");
    }else{
        for (i=1; i<=N; i++){
            k=0;
            for(j=1; j<i; j++){
                if(i%j==0){
                    k=k+j;
                }
            }
            if(k==i){
                printf("%d", i);
                printf("\n");
            }
        }
    }

    return 0;
}
