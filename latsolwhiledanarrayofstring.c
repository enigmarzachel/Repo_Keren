#include <stdio.h>
#include <string.h>
// typedef struct
//{
//     char siswa[56];
// } nama;
int main()
{
    char nama[51];
    char daftar_nama;
    int i = 0;
    int j = 0;

    while (daftar_nama != ',' && i < 51)
    {
        scanf("%c", &daftar_nama);
        nama[i] = daftar_nama;
        i++;
    }
    nama[i - 1] = '\0';

    printf("%s", nama);
    int panjang = strlen(nama);

    while (j <= panjang)
    {
        if (nama[j] != ' ')
        {
            printf("%s", nama[j]);
        }
        if (nama[j] == ',')
        {
            printf("\n");
        }
        j++;
    }

    // →
    // printf("%s", nama);
    // for (int j = 0; j < panjang; j++)
    //{
    //     if (nama[j] != ' ')
    //     {
    //         printf("%s", nama[j]);
    //     }
    // }
    return 0;
}