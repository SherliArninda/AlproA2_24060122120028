/*
Nama Program  : gayaSentr.c
Deskripsi     : Menghitung gaya sentripetal, F =m * (v * v / r)
Nama Pembuat  : Sherli Arninda
NIM           : 24060122120028
Tanggal       : 26 Februari 2023
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Kamus Lokal
    float F; //gaya, newton
    float m; //massa, kg
    float v; //kecepatan, m/s
    float r; //jari-jari, meter

    //Algoritma
    printf("====Menghitung Gaya Sentripetal====\n");
    printf("=============================\n");

    printf("\nMasukkan massa (m) = ");//proses input
    scanf("%f",&m);

    printf("\nMasukkan kecepatan (v) = ");
    scanf("%f",&v);

    printf("\nMasukkan jari-jari (r) = ");
    scanf("%f",&r);

    F = m*(v*v/r); //proses menghitung

    printf("\n===========================\n");
    printf("Gaya Sentripetal adalah %f \n",F);//proses output

    return 0;
}
