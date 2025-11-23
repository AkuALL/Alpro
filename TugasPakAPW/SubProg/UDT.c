#include <stdio.h>
#include <string.h> 

typedef struct {
    char nama[50];
    int umur;
    char jurusan[50];
    float ipk;
} Mahasiswa;

int main() {
    Mahasiswa mhs[1];

    for (int i = 0; i < 1; i ++){
        printf("Nama: ");
        scanf("%s", mhs[i].nama);
        printf("Umur: ");
        scanf("%d", &mhs[i].umur);
        printf("Jurusan: ");
        scanf("%s", mhs[i].jurusan);
        printf("IPK: ");
        scanf("%f", &mhs[i].ipk);
    }
    printf("%s",mhs[0].nama);
    return 0;
}
