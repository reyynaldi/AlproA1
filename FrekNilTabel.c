/* Nama File        : 2_FrekNilTabel.c */
/* Deskripsi        : Mengeluarkan nilai dalam tabel yang memiliki frekuensi kemunculan lebih dari satu. */
/* Pembuat          : Muhammad Reynaldi Akbar - 24060122130052 */
/* Tanggal Pembuatan: 14 Maret 2023 */


#include <stdio.h>
#include <stdlib.h>

int main()
{
/* Kamus */

    int i, j, ukuran, sama, *array_int;

/* Algoritma */

    printf("Masukkan ukuran array: ");
    scanf("%d", &ukuran);

    array_int = (int*)malloc(ukuran * sizeof(int));

    if (ukuran < 1){
        printf("Masukan harus positif. ");
    }
    else{
        for (i = 0; i<ukuran; i++){
            scanf("%d", &array_int[i]);
        }

        for (i = 0; i<ukuran; i++){
            sama = 0;
            for (j = 0; j < ukuran; j++){
                if (i == j){
                    break;
                }
                else{
                    if (array_int[i] == array_int[j]){
                    sama += 1;
                    }
                }
            }
            if (sama == 1){
                printf("%d\t", array_int[i]);
            }
        }
    }
    return 0;
}
