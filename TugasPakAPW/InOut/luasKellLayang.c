/*Nama File 	  : luasKellLayang.c*/
/*Deskripsi 	  : menghitung keliling dan luas layang-layang*/
/*Pembuat   	  : 24060124120030 - An Al Rivaldi*/
/*Tgl Pembuatan	: 24/02/2025 Pukul 22.48 WIB*/

#include <stdio.h> /*header file*/

/*Program Utama*/
int main(){ 

  /*Kamus*/
  float s1;
  float s2;
  float d1;
  float d2;
  float Kell;
  float Luas;

  /*Algoritma*/
  printf("==================== Menghitung Luas dan Keliling Layang-Layang ====================\n");
  printf("Masukkan nilai sisi satu layang-layang (m): ");
  scanf("%f", &s1);
  printf("Masukkan nilai sisi dua layang-layang (m): ");
  scanf("%f", &s2);
  printf("Masukkan nilai diagonal satu layang-layang (m): ");
  scanf("%f", &d1);
  printf("Masukkan nilai diagonal dua layang-layang (m): ");
  scanf("%f", &d2);
  Kell = 2 * (s1 + s2);
  Luas = 0.5 * d1 * d2;

  printf("==================== HASIL ====================\n");
  printf("Diketahui keliling layang-layang adalah %f m\n", Kell);
  printf("Kemudian untuk luas layang-layang adalah %f m^2\n", Luas);
  return 0;
}