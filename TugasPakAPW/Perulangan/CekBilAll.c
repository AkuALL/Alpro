/*Nama File     : CekBilAll.c*/
/*Deskripsi     : Untuk cek apakah bilangan yang diinput adalah bilangan prima atau sempurna atau bukan keduanya*/
/*Pembuat       : 24060124120030 - An Al Rivaldi*/
/*Tgl Pembuatan : 10/3/2025 Pukul 20.09 WIB*/

#include <stdio.h>

/*Program Utama*/
int main() {
    int N;
    int i;
    int jmlfac; 

    /*Algoritma*/
    printf("==================== Cek Bilangan Prima dan Bilangan Sempurna ====================\n");
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

        for (i = 1; i <= N/2; i++) {
            if (N % i == 0) {
                jmlfac += i;
            }
        }
        if (jmlfac == N) {
            printf("\n%d adalah bilangan sempurna\n", N);
        } 
        else {
            printf("\n%d bukan bilangan sempurna\n", N);
        }

    }
    else {
        printf("Masukkan angka yang lebih besar dari 0\n");
    }
        return 0;
}  