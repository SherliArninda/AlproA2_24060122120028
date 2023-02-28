/*
Nama Program  : jarakGLBB.c
Deskripsi     : Menghitung jarak GLBB, S = v0 * t + 0.5* (a * t * t)
Nama Pembuat  : Sherli Arninda
NIM           : 24060122120028
Tanggal       : 26 Februari 2023
*/
#include <stdio.h>
#include <stdlib.h>
int  main(void){
    // Kamus Lokal
    float S;//jarak, meter
    float v0;//kecepatan awal, m/s
    float t;//waktu,detik
    float a;//percepatan, m/s^2

    // Algoritma
    printf("====Menghitung Jarak GLBB====\n");
    printf("=============================\n");

    printf("\nMasukkan kecepatan awal (v0) = "); //proses input
    scanf("%f",&v0);

    printf("\nMasukkan waktu (t) = ");
    scanf("%f",&t);

    printf("\nMasukkan percepatan (a) = ");
    scanf("%f",&a);

    S = v0*t+0.5*(a*t*t);//proses menghitung

    printf("\n===========================\n");
    printf("Jarak GLBB adalah %f \n",S);//proses output

    return 0;
}
