#include <stdio.h>
#include "kalkulator.c"

int main(){
    char op;
    int a,b;

    while(1){
        printf("Masukkan operator (+,-,*,/) atau Q untuk exit: ");
        inputOperator(&op);
        if (op == 'Q' || op == 'q'){
            break;
        }
        printf("Operator yang dimasukkan: %c\n", op);
        printf("Masukkan dua angka: ");
        inputNilai(&a);
        inputNilai(&b);

        switch (op){
            case '+':
                tambah(&a, b);
                output(a);
                break;
            case '-':
                kurang(&a, b);
                output(a);
                break;
            case '*':
                kali(&a, b);
                output(a);
                break;
            case '/':
                if(b != 0){
                    bagi(&a, b);
                    output(a);
                }
                else{
                    printf("Error: Pembagian dengan 0!\n");
                }
                break;
            default:
                printf("Error: Operator tidak valid!\n");
        }
    }
    return 0;
}