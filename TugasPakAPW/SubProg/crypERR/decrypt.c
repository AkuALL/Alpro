#ifndef DECRYPT_C 
#define DECRYPT_C

#include "decrypt.h"
#include <stdio.h>

int hitungPanjang(const char *str) {
    int panjang = 0;
    while (str[panjang] != '\0') {
        panjang++;
    }
    return panjang;
}

char decrypt(int n, char *str) {
    int i;
    for (i = 0; i < hitungPanjang(str); i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = 'a' + (str[i] - 'a' - n + 26) % 26;
        } else if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = 'A' + (str[i] - 'A' - n + 26) % 26;
        }
    }
    return *str;
}

#endif