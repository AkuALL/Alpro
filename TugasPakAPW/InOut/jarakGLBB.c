/*Nama File 	  : jarakGLBB.c*/
/*Deskripsi 	  : menghitung jarak (S) yang ditempuh benda yang mengalami GLBB*/
/*Pembuat   	  : 24060124120030 - An Al Rivaldi*/
/*Tgl Pembuatan	: 24/02/2025 Pukul 21.55 WIB*/

#include <stdio.h> /*header file*/

/*Program Utama*/
int main(){ 

  /*Kamus*/
  float v0;
  float t;
  float a;
  float S;

  /*Algoritma*/
  printf("==================== Menghitung Jarak (S) yang Ditempuh Benda yang Mengalami GLBB ====================\n");
  printf("Masukkan nilai kecepatan awal (m/s): ");
  scanf("%f", &v0);
  printf("Masukkan nilai waktu (s): ");
  scanf("%f", &t);
  printf("Masukkan nilai percepatan (m/s^2): ");
  scanf("%f", &a);
  S = v0*t + 0.5 * (a*t*t);

  printf("==================== HASIL ====================\n");
  printf("Diketahui bahwa nilai jarak yang ditempuh adalah %f meter\n", S);
  return 0;
}