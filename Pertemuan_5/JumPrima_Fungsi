/* Nama File        : JumPrima_Fungsi.c */
/* Deskripsi        : Mengeluarkan hasil jumlah bilangan-bilangan prima sampai dengan N. */
/* Pembuat          : Muhammad Reynaldi Akbar - 24060122130052 */
/* Tanggal Pembuatan: 21 Maret 2023 */

#include <stdio.h>
#include <stdlib.h>

int jumprim(N);

int main()
{
/* Kamus */
    int n;

/* Algoritma */

    printf("Masukkan nilai n: ");
    scanf("%d", &n);

    if (n > 1){
        printf("\nJumlahnya bilangan primanya adalah = %d\n", jumprim(n));
    }
    else{
        printf("\nTidak ada bilangan prima, sehingga jumlahnya adalah = 0\n");
    }
    return 0;
}

int jumprim(N){

/* Kamus Lokal */
    int jumlah, faktor;

/* Algoritma */
    for (int i = 1; i<=N && N>0 ; i++){
        faktor = 0;
        for (int j = 1; j<=i; j++){
            if (i % j == 0){
                faktor++;
            }
        }
        if (faktor == 2){
            jumlah+=i;
        }
    }
    return jumlah;
}
