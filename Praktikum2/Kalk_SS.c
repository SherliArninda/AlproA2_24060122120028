/*
Nama Program  : Kalk_SS.c
Deskripsi     : Menhitung beberapa hasil operasi aritmatika terhadap kedua masukkan iA dan iB tergantung dari pilihan operasi yang dipilih
Nama Pembuat  : Sherli Arninda
NIM           : 24060122120028
Tanggal       : 05 Februari 2023
*/
#include <stdio.h>
#include <stdlib.h>

int Kalk_SS(void)
{
    // Kamus Lokal
    char operasi;//nilai masukkan untuk operasi
    float iA,iB;//nilai yang harus dimasukkan
    int a,b,c,e,f;
    float d;//agar nanti hasilnya bisa desimal
    int k,l;//nlai masukkan untuk operasi mod, masukkannya sama dengan iA,iB hanya saja ini bertipe float

    //Algoritma
    printf("Masukkan operasi : ");
    scanf("%c", &operasi);
    printf("Masukkan bilangan 1 : ");
    scanf("%f", &iA);
    printf("Masukkan bilangan 2 : ");
    scanf("%f", &iB);

    k = iA;
    l = iB;
    a = iA + iB;
    b = iA - iB;
    c = iA * iB;
    d = iA / iB;
    e = iA / iB;
    f = k % l;

    if(operasi=='a'){
        printf("%d", a);
    }else if(operasi=='b'){
        printf("%d", b);
    }else if(operasi=='c'){
        printf("%d", c);
    }else if(operasi=='d'){
        printf("%f", d);
    }else if(operasi=='e'){
        printf("%d", e);
    }else if(operasi=='f'){
        printf("%d", f);
    }else{
        printf("Bukan pilihan menu yang benar");
    }



    return 0;
}



