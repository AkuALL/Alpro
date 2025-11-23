#include <stdio.h>
#include "Tukar.c"

int main(){
    int a, b;
    
    printf("================================== Menukar Dua Bilangan ==================================\n");
    printf("Masukkan nilai a: ");
    scanf("%d", &a);  
    printf("Masukkan nilai b: ");
    scanf("%d", &b);  
    
    tukar(&a, &b);

    printf("================================== OUTPUT ==================================\n");
    printf("Setelah ditukar maka nilai a = %d dan nilai b = %d\n", a, b);
    return 0;
}
