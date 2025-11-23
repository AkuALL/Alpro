/*Nama File     : CekBilPrima.c*/
/*Deskripsi     : Untuk cek apakah bilangan yang diinput adalah bilangan prima atau bukan*/
/*Pembuat       : 24060124120030 - An Al Rivaldi*/
/*Tgl Pembuatan : 3/3/2025 Pukul 20.09 WIB*/

#include <stdio.h> /*header file*/

/*Program Utama*/
int main() {
    int N;
    int i;
    int jmlfac; // Variabel untuk menghitung jumlah faktor

    /*Algoritma*/
    printf("==================== Cek Bilangan Prima atau Bukan ====================\n");
    printf("Masukkan angka yang ingin diketahui (N) : ");
    scanf("%d", &N);

    printf("===================== HASIL =====================\n");
    jmlfac = 0;
    if (N > 0) {
        printf("Faktor dari %d adalah: ", N);
        for (i = 1; i <= N; i++) {
            if (N % i == 0) {
                jmlfac ++;
                printf("%d ", i);
            }
        }
        if (jmlfac == 2) {
            printf("\n%d adalah bilangan prima", N);
        } 
        else {
            printf("\n%d bukan bilangan prima", N);
        }
    }
    else {
        printf("Masukkan angka yang lebih besar dari 0\n");
    }
        return 0;
}  