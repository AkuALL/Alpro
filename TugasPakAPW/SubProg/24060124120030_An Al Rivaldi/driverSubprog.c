/*Nama File 	  : driverSubprog.c*/
/*Deskripsi 	  : Driver Abstract Data Type Tabel*/
/*Pembuat   	  : 24060124120030 - An Al Rivaldi*/
/*Tgl Pembuatan	  : 24/03/2025 Pukul 11.36 WIB*/

/***************************************************************/ 
/*                                                             */ 
/*    Nama File   : driverSubprog.h                            */ 
/*    Deskripsi   : Driver Abstract Data Type Tabel            */ 
/*                                                             */ 
/***************************************************************/ 

#include <stdio.h>
#include "Subprog.c"

/*Program Utama*/
int main(){
/*Kamus Lokal*/ 
    int a, b, n;
    char str[100];

/*Algoritma*/ 
    printf("================================== Menukar Dua Bilangan ==================================\n");
    printf("Masukkan nilai a: ");
    scanf("%d", &a);  
    printf("Masukkan nilai b: ");
    scanf("%d", &b);  
    tukar(&a, &b);
    printf("================================== OUTPUT ==================================\n");
    printf("Setelah ditukar maka nilai a = %d dan nilai b = %d\n", a, b);
    
    printf("=====================================================================================\n");

    printf("================================== Dekripsi String ==================================\n");
    printf("Masukkan n: ");
    scanf("%d", &n);
    printf("Masukkan string yang ingin didekripsi: ");
    scanf("%s", &str);
    decrypt(n, str); 
    printf("================================== OUTPUT ==================================\n");
    printf("String setelah didekripsi adalah (%s)\n", str);

    return 0;
}