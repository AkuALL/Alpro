#include <stdio.h>
#include <string.h>

int main() {
    char input[100]; // Menyimpan kata atau kalimat
    int a, i;

    // Meminta input kata
    printf("Masukkan sebuah kata: ");
    scanf("%s", input);

    // Meminta input angka sebagai pengurang
    printf("Masukkan jumlah pergeseran mundur: ");
    scanf("%d", &a);

    // Memproses setiap karakter dalam string
    for (i = 0; i < strlen(input); i++) {
        // Menghindari mengubah karakter non-huruf
        if ((input[i] >= 'A' && input[i] <= 'Z')) {
            input[i] = 'A' + (input[i] - 'A' - a + 26) % 26; // Menggeser mundur huruf kapital
        } else if ((input[i] >= 'a' && input[i] <= 'z')) {
            input[i] = 'a' + (input[i] - 'a' - a + 26) % 26; // Menggeser mundur huruf kecil
        }
    }

    // Menampilkan hasil
    printf("Hasil setelah pergeseran: %s\n", input);

    return 0;
}
