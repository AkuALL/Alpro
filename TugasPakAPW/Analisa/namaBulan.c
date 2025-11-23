/*Nama File 	  : namaBulan.c*/
/*Deskripsi 	  : Menentukan nama bulan sesuai nomor bulan*/
/*Pembuat   	  : 24060124120030 - An Al Rivaldi*/
/*Tgl Pembuatan	  : 25/02/2025 Pukul 13.20 WIB*/

#include <stdio.h> /*header file*/

/*Program Utama*/
int main(){ 

  /*Kamus*/
  int i;

  /*Algoritma*/
    printf("==================== Menentukan Nama Bulan  ====================\n");
    printf("Masukkan nomor bulan:");
    scanf("%d", &i);
    printf("===================== HASIL =====================\n");
    if (i >= 1 && i <= 12) {
        if (i == 1){
            printf("Bulan pertama adalah Januari");
        }
        else if (i == 2){
            printf("Bulan kedua adalah Februari");
        }
        else if (i == 3){
            printf("Bulan ketiga adalah Maret");
        }
        else if (i == 4){
            printf("Bulan keempat adalah April");
        }
        else if (i == 5){
            printf("Bulan kelima adalah Mei");
        }
        else if (i == 6){
            printf("Bulan keenam adalah Juni");
        }
        else if (i == 7){
            printf("Bulan ketujuh adalah Juli");
        }
        else if (i == 8){
            printf("Bulan kedelapan adalah Agustus");
        }
        else if (i == 9){
            printf("Bulan kesembilan adalah September");
        }
        else if (i == 10){
            printf("Bulan kesepuluh adalah Oktober");
        }
        else if (i == 11){
            printf("Bulan kesebelas adalah November");
        }
        else{
            printf("Bulan kedua belas adalah Desember");
        }
    }
    else{
        printf("Masukkan nomor bulan tidak tepat");
    }
    return 0;
}