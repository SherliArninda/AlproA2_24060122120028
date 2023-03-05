/*
Nama Program  : TotalTahanan.c
Deskripsi     : Menghitung dan Menampilkan ke layar total tahanan jika diberi 3 inputan dan inputan tidak boleh negatif
Nama Pembuat  : Sherli Arninda
NIM           : 24060122120028
Tanggal       : 03 Februari 2023
*/
#include <stdio.h>
#include <stdlib.h>

int TotalTahanan(void)
{
    // Kamus Lokal
    int i;//total 3 inputan tahanan
    int a,b,c;//nilai yang harus dimasukkan

    //Algoritma
    printf("Masukkan tahanan 1 : ");
    scanf("%d", &a);
    printf("Masukkan tahanan 2 : ");
    scanf("%d", &b);
    printf("Masukkan tahanan 3 : ");
    scanf("%d", &c);

    if(a>0 && b>0 && c>0){
        i = a+b+c;
        printf("%d", i);
    }else{
        printf("Masukkan Tahanan Tidak Boleh Negatif");
    }

    return 0;
}


