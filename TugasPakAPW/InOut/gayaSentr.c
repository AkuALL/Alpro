/*Nama File 	  : gayaSentr.c*/
/*Deskripsi 	  : menghitung gaya sentripetal*/
/*Pembuat   	  : 24060124120030 - An Al Rivaldi*/
/*Tgl Pembuatan	: 24/02/2025 Pukul 22.17 WIB*/

#include <stdio.h> /*header file*/

/*Program Utama*/
int main(){ 

  /*Kamus*/
  float m;
  float v;
  float r;
  float F;

  /*Algoritma*/
  printf("==================== Menghitung Gaya Sentri ====================\n");
  printf("Masukkan nilai massa (kg): ");
  scanf("%f", &m);
  printf("Masukkan nilai kecepatan (m/s): ");
  scanf("%f", &v);
  printf("Masukkan nilai jari-jari (m): ");
  scanf("%f", &r);
  F = m * (v*v/r);

  printf("==================== HASIL ====================\n");
  printf("Diketahui bahwa nilai gaya sentri adalah %f Newton\n", F);
  return 0;
}