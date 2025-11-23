// SENTINEL
#include <stdio.h>
int main(){
    int arr[5] = {1, 2, 3, 4, 5}; // N = 5
    int x = 4, i;
    i = 1;
    while (arr[i] != x) {
        i++;
    }
    if (arr[i] < 6) { // N+1 = 6
        printf("Element ditemukan %d\n", i);
    }
    else {
        printf("Element tidak ditemukan\n");
    }
    return 0;
}