/*
Nama Program  : BilPrimaN.c
Deskripsi     : Menampilkan bilangan prima sampai dengan N
Nama Pembuat  : Sherli Arninda
NIM           : 24060122120028
Tanggal       : 07 Maret 2023
*/
#include <stdio.h>
#include <stdlib.h>

int BilPrimaN(void)
{
    //kamus lokal
    int N;
    int i;
    int a;
    int b;
    //algoritma
    printf("Masukkan bilangan N = ");
    scanf("%d",&N);

    if(N<=0){
        printf("Bilangan harus positif");
    }else{
        for(i=1; i<=N; i++){
            a=0;
            for(b=1; b<=i; b++){
                if(i % b == 0){
                    a = a + 1;
                }
            }
            if(a==2){
            printf("%d",i);
            printf("\n");
        }

        }
    }

    return 0;
}





