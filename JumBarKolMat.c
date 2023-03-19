/* Nama File        : 5_JumBarKolMat.c */
/* Deskripsi        : Menjumlahkan elemen pada satu kolom atau baris suatu matriks. */
/* Pembuat          : Muhammad Reynaldi Akbar - 24060122130052 */
/* Tanggal Pembuatan: 14 Maret 2023 */

#include <stdio.h>
#include <stdlib.h>

int main()
{

/* Kamus */
    //int matriks[3][4] = {{1, 3, 5, 7}, {6, 2, 5, 2}, {1, 4, 2, 4}};
    //int baris = sizeof(matriks)/sizeof(matriks[0]);
    //int kolom = sizeof(matriks[0])/sizeof(matriks[0][0]);
    //int i, j, jumlah = 0;

    int i, j, baris, kolom, jumlah = 0, **matriks;

/* Algoritma */

    printf("Masukkan ukuran baris: ");
    scanf("%d", &baris);

    printf("Masukkan ukuran kolom: ");
    scanf("%d", &kolom);

    if (baris < 1 || kolom < 1){
        printf("Masukan harus positif. ");
    }
    else{
        matriks = (int**)malloc(baris * sizeof(int*));
        for (i = 0; i < baris; i++){
            matriks[i] = (int*)malloc(kolom * sizeof(int));
            }
        }

        for (i = 0; i < baris; i++){
            for (j = 0; j < kolom; j++){
                printf("Masukkan elemen baris %d: ", i+1);
                scanf("%d", &matriks[i][j]);
                if (matriks[i][j] < 1){
            }
        }

        for (i = 0; i < baris; i++){
            for (j = 0; j < kolom; j++){
                printf("%d\t", matriks[i][j]);
            }
            printf("\n");
        }

        for (i = 0; i < baris; i++){
            jumlah = 0;
            for (j = 0; j < kolom; j++){
                jumlah+=matriks[i][j];
            }
            printf("Jumlah baris %d adalah: %d\n", i+1, jumlah);
        }

        for (j = 0; j < kolom; j++){
            jumlah = 0;
            for (i = 0; i < baris; i++){
                jumlah+=matriks[i][j];
            }
            printf("Jumlah kolom %d adalah: %d\n", j+1, jumlah);
        }
    }

    return 0;
}
