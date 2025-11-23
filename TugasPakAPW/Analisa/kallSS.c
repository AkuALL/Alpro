/*Nama File 	  : kallSS.c*/
/*Deskripsi 	  : Membuat Kalkulator Sederhana melalui inputan operator*/
/*Pembuat   	  : 24060124120030 - An Al Rivaldi*/
/*Tgl Pembuatan	: 25/02/2025 Pukul 08.10 WIB*/

#include <stdio.h> /*header file*/

/*Program Utama*/
int main(){ 

  /*Kamus*/
  int iA; 
  int iB;
  int mod;
  char op;

  /*Algoritma*/
  printf("==================== Kalkulator Sederhana ====================\n");
  printf(" a : Perkalian\n b : Pengurangan\n c : Perkalian\n d : Pembagian\n e : Floor division\n f : Modulus\n");
  printf("Pilih operasi hitung: ");
  scanf("%c", &op);
  printf("Masukkan bilangan bulat A: ");
  scanf("%d", &iA);
  printf("Masukkan bilangan bulat B: ");
  scanf("%d", &iB);  
  printf("===================== HASIL =====================\n");
  if (op == 'a'){
    printf("Hasil penjumlahan %d + %d = %d\n", iA, iB, iA + iB);
  }
  else if (op == 'b'){
    printf("Hasil pengurangan %d - %d = %d\n", iA, iB, iA - iB);
  }
  else if (op == 'c'){
    printf("Hasil perkalian %d x %d = %d\n", iA, iB, iA * iB);
  }
  else if (op == 'd'){
    if (iB == 0){
      printf("Tak terdefinisi\n");
    }
    else{
      printf("Hasil pembagian %d / %d = %.3f\n", iA, iB, (float) iA / iB);
    }
  }
  else if (op == 'e'){
    if (iB == 0){
      printf("Tak terdefinisi\n");
    }
    else{
      printf("Hasil pembagian bulat %d div %d = %d\n", iA, iB, iA / iB);
    }
  }
  else if (op == 'f'){ 
    if (iB == 0){
      printf("Tak terdefinisi\n");
    }
    else if (iA < 0){
      printf("Hasil modulo %d mod %d = %d\n", iA, iB, ((iA % iB) + iB));
    }
    else{
      printf("Hasil modulo %d mod %d = %d\n", iA, iB, iA % iB);  
    }
  }
  else{
    printf("Bukan pilihan menu yang benar\n");
  }
  return 0;
}