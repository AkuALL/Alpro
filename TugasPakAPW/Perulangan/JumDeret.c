/*Nama File     : JumDeret.c*/
/*Deskripsi     : Menampilkan jumlah dari deret bilangan 1+2+3+...+N*/
/*Pembuat       : 24060124120030 - An Al Rivaldi*/
/*Tgl Pembuatan : 3/3/2025 Pukul 19.10 WIB*/

#include <stdio.h> /*header file*/

// Program Utama
int main() {

    // Kamus
    int N;
    int i;
    int jml;

    // Algoritma
    printf("==================== Menampilkan Jumlah dari Deret Bilangan 1 + 2 + ... + N ====================\n");
    printf("Masukkan angka sebagai batas atas (N) : ");
    scanf("%d", &N);

    printf("===================== HASIL =====================\n");
    jml = 0;
    if (N > 0) {
        for (i = 1; i <= N; i++) {
            jml += i;
        }    
        printf("Jumlah deret adalah: %d \n", jml);
    }
    else{
        printf("Masukkan angka yang lebih besar dari 0\n");
    }
    return 0;
}