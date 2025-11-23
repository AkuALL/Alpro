/*Nama File 	  : Subprog.c*/
/*Deskripsi 	  : Body Abstract Data Type Tabel*/
/*Pembuat   	  : 24060124120030 - An Al Rivaldi*/
/*Tgl Pembuatan	  : 24/03/2025 Pukul 10.26 WIB*/

/***************************************************************/ 
/*                                                             */ 
/*    Nama File   : Subprog.c                                  */ 
/*    Deskripsi   : Body Abstract Data Type Tabel              */ 
/*                                                             */ 
/***************************************************************/ 


#include <stdio.h>
#include "Subprog.h"

#ifndef TUKAR_C
#define TUKAR_C

void tukar(int *a, int *b){
/* Proses : Menukar nilai yang ada pada a dan b.*/ 
/* I.S : Diberikan angka semula untuk a dan b, tidak boleh kosong.*/ 
/* F.S : Angka sudah mengalami penukaran untuk a dan b.*/ 
 
/*Kamus Lokal*/
    int c;
/*Algoritma*/ 
    c = *a;
    *a = *b;  
    *b = c;
}

int hitungPanjang(const char *str) {
/*Deskripsi : Menghitung panjang string.*/

/*Kamus Lokal*/
    int panjang = 0;
/*Algoritma*/ 
    while (str[panjang] != '\0') {
        panjang++;
    }
    return panjang;
}

void decrypt(int n, char *str) {
/* Proses : Mendekrip setiap huruf pada string.*/ 
/* I.S : Diberikan string terenkripsi.*/ 
/* F.S : String terdekripsi.*/ 
 
/*Kamus Lokal*/
int i;
/*Algoritma*/ 
    for (i = 0; i < hitungPanjang(str); i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = 'a' + (str[i] - 'a' - n + 26) % 26;
        } else if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = 'A' + (str[i] - 'A' - n + 26) % 26;
        }
    }
}

#endif