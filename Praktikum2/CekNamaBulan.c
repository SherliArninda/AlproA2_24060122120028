/*
Nama Program  : CekNamaBulan.c
Deskripsi     : Menampilkan ke layar nama-nama Bulan dari nomor bulan, yaitu 1 s.d. 12 yang dibaca dari masukan keyboard
Nama Pembuat  : Sherli Arninda
NIM           : 24060122120028
Tanggal       : 03 Februari 2023
*/
#include <stdio.h>
#include <stdlib.h>

int CekNamaBulan(void)
{
    // Kamus Lokal
    int i;//nilai input nomor bulan
    //Algoritma
    printf("Masukkan bilangan : ");

    if(scanf("%d",&i) && i>0 && i<=12){
        if(i==1){
            printf("Januari");
        }else if(i==2){
            printf("Februari");
        }else if(i==3){
            printf("Maret");
        }else if(i==4){
            printf("April");
        }else if(i==5){
            printf("Mei");
        }else if(i==6){
            printf("Juni");
        }else if(i==7){
            printf("Juli");
        }else if(i==8){
            printf("Agustus");
        }else if(i==9){
            printf("September");
        }else if(i==10){
            printf("Oktober");
        }else if(i==11){
            printf("November");
        }else if(i==12){
            printf("Desember");
        }
    }else{
        printf("Masukkan Nomor Bulan Tidak Tepat");
    }

    return 0;
}

