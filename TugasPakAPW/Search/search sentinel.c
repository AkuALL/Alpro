// Nama File : SearchSent.c
// Deskripsi : mencari harga X dalam tabel T terurut secara Sequential dengan Sentinel
// Nama : An Al Rivaldi
// Tanggal : 11 Mei 2025

#include <stdio.h>
#include <stdbool.h>

void SearchSent(int T[], int N, int X, int *IX ){
    //Kamus Lokal
    int i;
    //Algoritma
    T[N] = X;
    i = 0;
    while(T[i] != X){
        i++;
    }
    if(i<N){
        *IX = i;
    }
    else{
        *IX = 0;
    }
}

int main(){
    //Kamus lokal
    int N = 10;
    int T[10]= {19,1,28,5,20,15,52,13,16,29};
    int X = 52;
    int IX;

    //Algoritma
    SearchSent(T,N,X,&IX);
    printf("%d", IX);
    return 0;
}