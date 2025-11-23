#include <stdio.h>
#include "Tukar.h"

#ifndef TUKAR_C
#define TUKAR_C

void tukar(int *a, int *b){
    int c;
    c = *a;
    *a = *b;  
    *b = c;
}
#endif