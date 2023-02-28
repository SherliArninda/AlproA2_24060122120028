/*
Nama Program  : luasKellLayang.c
Deskripsi     : Menghitung luas dan keliling layang-layang,Luas = 0.5*d1*d2 ,Kell = 2*(s1+s2)
Nama Pembuat  : Sherli Arninda
NIM           : 24060122120028
Tanggal       : 26 Februari 2023
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Kamus Lokal
    float Luas; //luas layang-layang, m^2
    float Kell; //keliling layang-layang, m^2
    float d1; //diagonal satu, meter
    float d2; //diagonal dua, meter
    float s1; //sisi satu, meter
    float s2; //sisi dua, meter

    //Algoritma
    printf("====Menghitung Luas dan Keliling Layang-Layang====\n");
    printf("==================================================\n");

    printf("\nMasukkan Diagonal 1 (d1) = ");
    scanf("%f",&d1);

    printf("\nMasukkan Diagonal 2 (d2) = ");
    scanf("%f",&d2);

    printf("\nMasukkan Sisi 1 (s1) = ");
    scanf("%f",&s1);

    printf("\nMasukkan Sisi 2 (s2) = ");
    scanf("%f",&s2);

    Luas = 0.5*d1*d2;//proses menghitung
    Kell = 2*(s1+s2);

    printf("\n===========================\n");
    printf("Luas layang-layang adalah %f \n",Luas);//proses output
    printf("Keliling layang-layang adalah %f \n",Kell);
    return 0;
}
