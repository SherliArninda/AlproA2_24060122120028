/*
Nama Program  : CekSegitiga.c
Deskripsi     : Menampilkan jenis segitiga jika diberi 3 inputan
Nama Pembuat  : Sherli Arninda
NIM           : 24060122120028
Tanggal       : 03 Februari 2023
*/
#include <stdio.h>
#include <stdlib.h>

int CekSegitiga(void)
{
    // Kamus Lokal
    int a,b,c;//nilai yang harus dimasukkan(sisi 1,2,3 segitiga)

    //Algoritma
    printf("Masukkan sisi 1 : ");
    scanf("%d", &a);
    printf("Masukkan sisi 2 : ");
    scanf("%d", &b);
    printf("Masukkan sisi 3 : ");
    scanf("%d", &c);

    if(a>0 && b>0 && c>0){
        if(a==b && b==c && a==c){
            printf("Segitiga Sama Sisi");
        }else if(a==b || b==c || a==c){
            printf("Segitiga Sama Kaki");
        }else if(a!=b && b!=c && a!=c){
            printf("Segitiga Sembarang");
        }
    }else{
        printf("Terdapat nilai yang bukan segitiga");
    }

    return 0;
}



