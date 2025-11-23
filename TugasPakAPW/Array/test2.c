#include <stdio.h>
#include <stdlib.h>

// pointer dipake di procedure yang dijadikan sebagai output
void Luas(int *Luas, int sisi){
    *Luas = sisi * sisi;
}

void tukar(int *a, int *b){
    int c;
    c = *a;
    *a = b;
    *b = c;
}