/* Nama File        : JumPrima_Prosedur.c */
/* Deskripsi        : Adalah Prosedur yang mengeluarkan hasil jumlah bilangan-bilangan prima sampai dengan N. */
/* Pembuat          : Muhammad Reynaldi Akbar - 24060122130052 */
/* Tanggal Pembuatan: 22 Maret 2023 */

#include <stdio.h>
#include <stdlib.h>

void jumprim(int jumlah, int N);

int main()
{
/* Kamus */
    int n, sum;

/* Algoritma */

    printf("Masukkan nilai n: ");
    scanf("%d", &n);

    if (n > 1){
        (jumprim(sum, n));
    }
    else{
        printf("\nTidak ada Bilangan prima sehingga jumlahnya adalah = 0\n");
    }
    return 0;
}

void jumprim(int jumlah, int N)
{
/* Kamus Lokal */
    int faktor;

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
    printf("\nJumlah bilangan primanya adalah = %d\n", jumlah);
}
