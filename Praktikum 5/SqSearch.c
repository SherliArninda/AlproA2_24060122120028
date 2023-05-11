/*Nama File : SqSearch */
/*Nama Pembuat : Sherli Arninda */
/*NIM: 24060122120028*/
/*Tanggal : 11 Mei 2023 */
/*Deskripsi : Mencari pada indeks keberapa X yang dicari*/
#include <stdio.h>
#include<stdlib.h>

int main(void) {
  int T[5] = {1,3,4,5,7};
  int n = 5;
  int ix;
  int x = 3;
  int i;

  i = 0;
  while (i<n && T[i]!=x) {
    i = i + 1;
  }
  if(T[i]==x){
    ix = i;
    printf("terdapat pada urutan %d",ix);
  }else{
    ix = 0;
    printf("terdapat pada urutan %d",ix);

  }

  return 0;
}
