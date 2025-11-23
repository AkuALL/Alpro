#include <stdio.h>

int main(){
    // Array of Int
    int a[10];
    for (int i = 0; i < 10; i++) {
        a[i] = 0 + i;
     }
     printf("%d\n", a);

    // Array of Char
    char b[10]; // di akhir ada \0 sehingga length adalah 9
     for (int i = 0; i < 9; i++) {
        b[i] = 'A' + i;
     }
     printf("%s\n", b);
}