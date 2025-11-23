/*Nama File     : CekBilSemp.c*/
/*Deskripsi     : Untuk cek apakah bilangan yang diinput adalah bilangan sempurna atau bukan*/
/*Pembuat       : 24060124120030 - An Al Rivaldi*/
/*Tgl Pembuatan : 4/3/2025 Pukul 09.40 WIB*/

#include <stdio.h> /*header file*/

/*Program Utama*/
int main() {
    int i;
    int N; 
    int facsum;

    /*Algoritma*/
    printf("==================== Cek Bilangan Sempurna atau Bukan ====================\n");
    printf("Masukkan angka yang ingin diketahui (N) : ");
    scanf("%d", &N);

    printf("===================== HASIL =====================\n");
    if (N > 0) {
        facsum = 0;
        for (i = 1; i <= N/2; i++) {
            if (N % i == 0) {
                facsum += i;
            }
        }
        if (facsum == N) {
            printf("%d adalah bilangan sempurna\n", N);
        } 
        else {
            printf("%d bukan bilangan sempurna\n", N);
        }
    }

    else {
        printf("Masukkan angka yang lebih besar dari 0\n");
    }  
    return 0;
}   