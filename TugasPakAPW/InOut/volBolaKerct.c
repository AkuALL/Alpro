/*Nama File 	  : volBolaKerct.c*/
/*Deskripsi 	  : menghitung volume bola dan kerucut*/
/*Pembuat   	  : 24060124120030 - An Al Rivaldi*/
/*Tgl Pembuatan	: 24/02/2025 Pukul 22.29 WIB*/

#include <stdio.h> /*header file*/

/*Program Utama*/
int main(){ 

  /*Kamus*/
  const float phi = 3.1415;
  float r;
  float Vb;
  float Vk;

  /*Algoritma*/
  printf("==================== Menghitung Volume Bola dan Kerucut ====================\n");
  printf("Masukkan nilai jari - jari (m): ");
  scanf("%f", &r);
  Vb = (4.0/3.0) * phi * (r*r*r);
  Vk = (1.0/2.0) * Vb;

  printf("==================== HASIL ====================\n");
  printf("Diketahui bahwa volume bola adalah %f m^3\n", Vb);
  printf("Kemudian untuk volume kerucut adalah %f m^3\n", Vk);
  return 0;
}