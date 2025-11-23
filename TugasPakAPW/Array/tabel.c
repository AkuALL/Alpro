#include <stdio.h>
#include <stdlib.h>

int main(){
    int *tabel;
    int *frek;
    int ukuran, i, nmax;

    printf("Masukkan ukuran tabel: ");
    scanf("%d", &ukuran);

    // Buat size tabel
    if (ukuran < 0){
        printf("Gaboleh qaqaq klo negatif");
    }
    else{
        tabel = (int *)malloc(ukuran * sizeof(int));
        nmax = 0;
        for (i = 0; i <= (ukuran-1); i++) {
            printf("Masukkan elemen ke- %d: \n", i);
            scanf("%d", &tabel[i]);
            if(tabel[i] > nmax){
                nmax = tabel[i];
                }
        }
    
        // Buat muncul frekuensi nilai di tabel
        frek = (int*)malloc(nmax * sizeof(int));
        for (i = 0; i <= (ukuran-1); i++) {
            frek[tabel[i]]++;
        }
    
        // Cek frekuensi yang lebih dari 1
        for (i = 0; i <= nmax; i++){
            if (frek[i] > 1){
                printf("elemen %d muncul sebanyak %d kali\n", i, frek[i]);
            }
        }
        free(tabel);
    }
    return 0;
}