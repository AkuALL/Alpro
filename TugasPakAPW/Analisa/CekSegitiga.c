/*Nama File 	  : CekSegitiga.c*/
/*Deskripsi 	  : Menentukan jenis segitiga melalui nilai sisi yang dimasukkan*/
/*Pembuat   	  : 24060124120030 - An Al Rivaldi*/
/*Tgl Pembuatan	  : 25/02/2025 Pukul 13.55 WIB*/

#include <stdio.h> /*header file*/

/*Program Utama*/
int main(){ 

  /*Kamus*/
  int A;
  int B;
  int C;

  /*Algoritma*/
    printf("==================== Menentukan Jenis Segitiga ====================\n");
    printf("Masukkan sisi A: ");
    scanf("%d", &A);
    printf("Masukkan sisi B: ");
    scanf("%d", &B);
    printf("Masukkan sisi C: ");
    scanf("%d", &C);
    printf("===================== HASIL =====================\n");
    if (A > 0 && B > 0 && C > 0){
        if (A == B && B == C){
            printf("Jenis segitiga adalah segitiga sama sisi");
        }
        else if (A == B || B == C || A == C){
            printf("Jenis segitiga adalah segitiga sama kaki");
        }    
        else{
            printf("Jenis segitiga adalah segitiga sembarang");
        }
    }
    else{
        printf("Terdapat nilai yang bukan sisi segitiga");
    }
    return 0;
}