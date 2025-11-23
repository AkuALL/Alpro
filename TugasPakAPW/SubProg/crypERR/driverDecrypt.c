#include <stdio.h>
#include "decrypt.c"

int main() {
    int n;
    char str[100];

    printf("Masukkan n: ");
    scanf("%d", &n);  
    printf("Masukkan string: ");
    scanf("%d", &str);  
    
    printf("String setelah didekripsi: %s\n", decrypt(n,str));
    return 0;
}
