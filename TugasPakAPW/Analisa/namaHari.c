/*Nama File 	  : namaHari.c*/
/*Deskripsi 	  : Menentukan nama hari sesuai nomor hari*/
/*Pembuat   	  : 24060124120030 - An Al Rivaldi*/
/*Tgl Pembuatan	  : 25/02/2025 Pukul 13.10 WIB*/

#include <stdio.h> /*header file*/

/*Program Utama*/
int main(){ 

  /*Kamus*/
  int i;

  /*Algoritma*/
    printf("==================== Menentukan Nama Hari  ====================\n");
    printf("Masukkan nomor hari:");
    scanf("%d", &i);
    printf("===================== HASIL =====================\n");
    if (i >= 1 && i <= 7) {
        switch(i){
        case 1:
            printf("Hari pertama adalah hari Minggu");
        break;
        case 2:
            printf("Hari kedua adalah hari Senin");
        break;
        case 3:
            printf("Hari ketiga adalah hari Selasa");
        break;
        case 4:
            printf("Hari ketiga adalah hari Selasa");
        break;
        case 5:
            printf("Hari ketiga adalah hari Selasa");
        break;
        case 6:
            printf("Hari ketiga adalah hari Selasa");
        break;
        case 7:
            printf("Hari ketiga adalah hari Selasa");
        break;
        }
    }    
    else{
        printf("Masukan nomor hari tidak tepat");
    }
    return 0;
}