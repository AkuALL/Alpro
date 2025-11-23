/*Nama File 	  : jarakPBola.c*/
/*Deskripsi 	  : menghitung jarak (S) yang ditempuh benda yang mengalami gerak parabola*/
/*Pembuat   	  : 24060124120030 - An Al Rivaldi*/
/*Tgl Pembuatan	: 24/02/2025 Pukul 22.03 WIB*/

#include <stdio.h> /*header file*/

/*Program Utama*/
int main(){ 

  /*Kamus*/
  float v0;
  float t;
  const float g = 9.81; /*m/s^2*/
  float y;

  /*Algoritma*/
  printf("==================== Menghitung Jarak (S) yang Ditempuh Benda yang Mengalami Gerak Parabola ====================\n");
  printf("Masukkan nilai kecepatan awal (m/s): ");
  scanf("%f", &v0);
  printf("Masukkan nilai waktu (s): ");
  scanf("%f", &t);
  y = v0*t - 0.5 * (g*t*t);

  printf("==================== HASIL ====================\n");
  printf("Diketahui bahwa nilai jarak yang ditempuh benda yang mengalami gerak parabola adalah %f meter\n", y);
  return 0;
}