/*Nama File 	  : BiayaKirim.c*/
/*Deskripsi 	  : Menghitung biaya pengiriman barang berdasar berat dan jarak*/
/*Pembuat   	  : 24060124120030 - An Al Rivaldi*/
/*Tgl Pembuatan	: 24/02/2025 Pukul 23.05 WIB*/

#include <stdio.h> /*header file*/

/*Program Utama*/
int main(){ 

  /*Kamus*/
  float bb;
  float j;
  int Cost;

  /*Algoritma*/
  printf("==================== Menghitung Biaya Pengiriman Barang ====================\n");
  printf("Masukkan berat barang (kg): ");
  scanf("%f", &bb);
  printf("Masukkan jarak (km): ");
  scanf("%f", &j);
  Cost = 10000 + (bb * 5000) + (j * 2000);

  printf("==================== HASIL ====================\n");
  printf("Maka besar biaya pengiriman yang harus dibayarkan adalah Rp%d\n", Cost);
  return 0;
}