/*
Nama Program  : CekNamaHari.c
Deskripsi     : Menampilkan ke layar nama-nama Hari dari nomor hari, yaitu 1 s.d. 7 yang dibaca dari masukan keyboard
Nama Pembuat  : Sherli Arninda
NIM           : 24060122120028
Tanggal       : 28 Februari 2023
*/
#include <stdio.h>
#include <stdlib.h>

int CekNamaHari(void)
{
    // Kamus Lokal
    int i;//nilai input nomor tanggal
    //Algoritma
    printf("Masukkan bilangan : ");

    if(scanf("%d",&i) && i>0 && i<=7){
        if(i==1){
            printf("Senin");
        }else if(i==2){
            printf("Selasa");
        }else if(i==3){
            printf("Rabu");
        }else if(i==4){
            printf("Kamis");
        }else if(i==5){
            printf("Jumat");
        }else if(i==6){
            printf("Sabtu");
        }else if(i==7){
            printf("Minggu");
        }
    }else{
        printf("Masukkan Nomor Hari Tidak Tepat");
    }

    return 0;
}
