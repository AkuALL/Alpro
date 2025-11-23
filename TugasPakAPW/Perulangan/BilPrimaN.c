/*Nama File     : BilPrimaN.c*/
/*Deskripsi     : Menampilkan semua bilangan prima dari 1 hingga N */
/*Pembuat       : 24060124120030 - An Al Rivaldi*/
/*Tgl Pembuatan : 3/3/2025 Pukul 22.45 WIB*/

#include <stdio.h> /*header file*/

/* Program Utama */
int main() {
    int N;   
    int i; 
    int j;   
    int jmlfac;

    /* Algoritma */
    printf("==================== Menampilkan Bilangan Prima Hingga N ====================\n");
    printf("Masukkan angka sebagai batas atas (N) : ");
    scanf("%d", &N);  

    printf("===================== HASIL =====================\n");
    if (N > 0) {
        printf("Bilangan prima dari 1 hingga %d adalah: ", N);  
        for (i = 2; i <= N; i++) {  
            jmlfac = 0;
            for (j = 1; j <= i; j++) {
                if (i % j == 0) {
                    jmlfac++;
                }
            }
            if (jmlfac == 2) {
                printf("%d ", i);  
            }
        }
    } 
    else {
        printf("Masukkan angka yang lebih besar dari 0\n");
    }
    return 0;
}
