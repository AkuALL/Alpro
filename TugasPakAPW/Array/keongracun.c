#include <stdio.h>
int main(){
    int hari, N;
   
    printf("Masukkan N (meter): ");
    scanf("%d", &N);

    hari = 1;
    while (N > 0){ 
        N = N - 0.3;
        if (N>0){
            hari += 1;
        }
    }
    printf("Maka dibutuhkan %d hari", hari);
}