/*
Nama Program  : CekBilangan.c
Deskripsi     : Mengecek dan menampilkan dilayar apakah sebuah bilangan itu termasuk bilangan bulat positif atau nol atau bulat negatif atau bukan termasuk bilangan
Nama Pembuat  : Sherli Arninda
NIM           : 24060122120028
Tanggal       : 28 Februari 2023
*/
#include <stdio.h>
#include <stdlib.h>

int CekBilangan(void)
{
    // Kamus Lokal
    int i;//nilai input
    //Algoritma
    printf("Masukkan bilangan : ");

    if(scanf("%d",&i)){
        if(i>0){
            printf("Bilangan positif");
        }else if(i==0){
            printf("bilangan nol");
        }else{
            printf("bilangan negatif");
        }
    }else{
        printf("bukan termasuk bilangan");
    }

    return 0;
}

