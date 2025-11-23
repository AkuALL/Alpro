/*Nama File     : BilSempN.c*/
/*Deskripsi     : Menampilkan semua bilangan sempurna hingga N */
/*Pembuat       : 24060124120030 - An Al Rivaldi*/
/*Tgl Pembuatan : 4/3/2025 Pukul 10.20 WIB*/

#include <stdio.h> /*header file*/

/* Program Utama */
int main() {
    int N; 
    int i;
    int j;
    int facsum;

    /* Algoritma */
    printf("==================== Menampilkan Bilangan Sempurna Hingga N ====================\n");
    printf("Masukkan angka sebagai batas atas (N) : ");
    scanf("%d", &N);

    printf("===================== HASIL =====================\n");
    if (N > 0) {
        printf("Bilangan sempurna dari 1 hingga %d adalah: ", N);
        for (i = 1; i <= N; i++) { 
            facsum = 0;
            for (j = 1; j <= i/2; j++) {
                if (i % j == 0) {
                    facsum += j;
                }
            }
            if (facsum == i) {
                printf("%d ", i);
            }
        }
    } 
    else {
        printf("Masukkan angka yang lebih besar dari 0\n");
    }
    return 0;
}