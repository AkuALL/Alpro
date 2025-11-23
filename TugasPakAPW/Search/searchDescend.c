#include <stdio.h>

int sequentialSearchSentinel(int T[], int N, int X) {
    // Tambahkan sentinel di akhir array
    T[N] = X;

    int i = 0;
    while (T[i] > X) {
        i++;
    }

    // Periksa apakah ditemukan dalam elemen asli (bukan sentinel)
    if (i < N && T[i] == X) {
        return i;  // Mengembalikan indeks tempat X ditemukan
    } else {
        return -1; // Tidak ditemukan
    }
}

int main() {
    int T[100] = {90, 80, 70, 60, 50}; // Contoh array terurut menurun
    int N = 5;
    int X = 70;

    int result = sequentialSearchSentinel(T, N + 1, X); // Ukuran N+1 karena kita tambahkan sentinel

    if (result != -1) {
        printf("Elemen %d ditemukan pada indeks %d\n", X, result);
    } else {
        printf("Elemen %d tidak ditemukan.\n", X);
    }

    return 0;
}
