#include <stdio.h>
#include "Decrypt.c" 

int main() {
    int n;
    char str[100];

    printf("================================== Dekripsi String ==================================\n");
    printf("Masukkan n: ");
    scanf("%d", &n);
    printf("Masukkan string terenkripsi: ");
    scanf("%s", &str);

    decrypt(n, str); 

    printf("================================== OUTPUT ==================================\n");
    printf("String setelah didekripsi adalah (%s)\n", str);
    return 0;
}
