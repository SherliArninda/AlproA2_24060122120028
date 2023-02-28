/*
Nama Program  : jarakPBola.c
Deskripsi     : Menghitung jarak parabola, y = v0 * t - 0.5 * (g * t * t)
Nama Pembuat  : Sherli Arninda
NIM           : 24060122120028
Tanggal       : 26 Februari 2023
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Kamus Lokal
    float y; //jarak,meter
    float v0; //kecepatan awal, m/s
    float t; //waktu,detik
    const float g=9.8; //konstanta gratifikasi , m/s^2

    //Algoritma
    printf("====Menghitung Jarak Parabola====\n");
    printf("=============================\n");

    printf("\nMasukkan kecepatan awal (v0) = ");//proses input
    scanf("%f",&v0);

    printf("\nMasukkan waktu (t) = ");
    scanf("%f",&t);

    y = v0*t-0.5*(g*t*t); //proses menghitung

    printf("\n===========================\n");
    printf("Jarak Parabola adalah %f \n",y);//proses output

    return 0;
}
