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
    printf("Masukkan nilai A: ");
    scanf("%d", &A);

    printf("Masukkan nilai B: ");
    scanf("%d", &B);

    printf("Masukkan nilai C: ");
    scanf("%d", &C);

    if (A > 0 && B > 0 && C > 0) {
        // Cek apakah bisa membentuk segitiga
        if ((A + B > C) && (A + C > B) && (B + C > A)) {
            // Menentukan jenis segitiga
            if (A == B && B == C) {
                printf("Jenis segitiga adalah segitiga sama sisi");
            } 
            else if (A == B || B == C || A == C) {
                printf("Jenis segitiga adalah segitiga sama kaki");
            } 
            else {
                printf("Jenis segitiga adalah segitiga sembarang");
            }
        } 
        else {
            printf("Ketiga sisi tidak dapat membentuk segitiga.\n");
        }
    } 
    else {
        printf("Terdapat nilai yang bukan sisi segitiga.\n");
    }
    return 0;
}