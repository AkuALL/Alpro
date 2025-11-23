/*Nama File     : FaktorBil.c*/
/*Deskripsi     : Mengeluarkan faktor suatu bilangan yang diinput*/
/*Pembuat       : 24060124120030 - An Al Rivaldi*/
/*Tgl Pembuatan : 3/3/2025 Pukul 17:39 WIB*/

#include <stdio.h> /*header file*/

/*Program Utama*/
int main() {
    int N;
    int i;

    /*Algoritma*/
    printf("==================== Mengeluarkan Faktor Bilangan ====================\n");
    printf("Masukkan angka yang ingin diketahui faktornya (N) : ");
    scanf("%d", &N);

    printf("===================== HASIL =====================\n");
    if (N > 0) {
        printf("Faktor dari %d adalah : ", N);
        for (i = 1; i <= N; i++) {
            if (N % i == 0) {
                printf("%d ", i);
            }
        } 
    }
    else{
        printf("Masukkan angka yang lebih besar dari 0\n");
    }       
    return 0;
}
