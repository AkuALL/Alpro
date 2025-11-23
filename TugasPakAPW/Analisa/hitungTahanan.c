/*Nama File 	  : hitungTahanan.c*/
/*Deskripsi 	  : Menghitung jumlah tahanan yang masuk*/
/*Pembuat   	  : 24060124120030 - An Al Rivaldi*/
/*Tgl Pembuatan	  : 25/02/2025 Pukul 13.40 WIB*/

#include <stdio.h> /*header file*/

/*Program Utama*/
int main(){ 

  /*Kamus*/
  int iA; /*jumlah tahanan yang masuk diawa*/
  int iB;
  int iC;

  /*Algoritma*/
    printf("==================== Menghitung Total Tahanan ====================\n");
    printf("Masukkan jumlah tahanan A: ");
    scanf("%d", &iA);
    printf("Masukkan jumlah tahanan B: ");
    scanf("%d", &iB);
    printf("Masukkan jumlah tahanan C: ");
    scanf("%d", &iC);
    printf("===================== HASIL =====================\n");
    if (iA >= 0 && iB >= 0 && iC >= 0){
        printf("Jumlah tahanan yang masuk adalah %d orang\n", iA + iB + iC);
    }
    else{
        printf("Masukan tahanan tidak boleh negatif");
    }
    return 0;
}