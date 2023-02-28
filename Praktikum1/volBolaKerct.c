/*
Nama Program  : volBolaKerct.c
Deskripsi     : Menghitung volume bola dan volume kerucut,Vb = 1.33*(PHI*r*r*r) , Vk = 0.5*Vb
Nama Pembuat  : Sherli Arninda
NIM           : 24060122120028
Tanggal       : 26 Februari 2023
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Kamus Lokal
    float Vb; //volume bola, m^2
    float Vk; //volume kerucut, m^2
    float r; //jari-jari, meter
    const float PHI=3.1415;

    //Algoritma
    printf("====Menghitung Volume Bola Dan Volume Kerucut====\n");
    printf("=================================================\n");

    printf("\nMasukkan jari-jari (r) = ");//proses input
    scanf("%f",&r);

    Vb = 1.33*(PHI*r*r*r);
    Vk = 0.5*Vb; //proses menghitung

    printf("\n===========================\n");
    printf("Volume Bola adalah %f \n",Vb);//proses output
    printf("Volume Kerucut adalah %f \n",Vk);

    return 0;
}
