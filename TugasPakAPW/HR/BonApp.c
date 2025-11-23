#include <stdio.h>

int main(){
    int a,b,c,d;
    int jmla,jmlb,jmlc;

    printf("masukkan a: ");
    scanf("%d",&a); 
    printf("masukkan b: ");    
    scanf("%d",&b); 
    printf("masukkan c: ");
    scanf("%d",&c); 
    printf("masukkan d: ");
    scanf("%d",&d);

    if (a >= 0){
        if (a % 3 == 0){
            jmla = a/3;
        }
        else{
            jmla = a/3 + 1;
        }
    }
    else if ((b >= 0) && (c >= 0)){
        if ((b+c) % 3 == 0){
            jmlb = (b+c)/3;
        }
        else{
            jmlb = (b+c)/3 + 1;
        }
    }
    else if (d >= 0){
        if (d % 3 == 0){
            jmlc = d/3;
        }
        else{
            jmlc = d/3 + 1;
        }
    }

    printf("%d", jmlc);
    return 0;
}