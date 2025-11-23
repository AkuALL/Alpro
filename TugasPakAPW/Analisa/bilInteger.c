/*Nama File 	  : bilInteger.c*/
/*Deskripsi 	  : Menentukan bilangan positif atau negatif atau nol*/
/*Pembuat   	  : 24060124120030 - An Al Rivaldi*/
/*Tgl Pembuatan	: 25/02/2025 Pukul 08.10 WIB*/

#include <stdio.h> /*header file*/

/*Program Utama*/
int main(){ 

  /*Kamus*/
  int i;

  /*Algoritma*/
  printf("==================== Menentukan Bilangan Positif, Negatif, atau Nol ====================\n");
  printf("Masukkan bilangan integer: ");
  scanf("%d", &i);
  printf("===================== HASIL =====================\n");
  if (i < 0){
    printf("Bilangan bulat adalah bilangan negatif\n");
  }
  else if (i == 0){
    printf("Bilangan bulat adalah bilangan nol\n");
  }
  else{
    printf("Bilangan bulat adalah bilangan positif\n");
  }
  return 0;
}