#include <stdio.h>

int main ()
{
    int angka;

    do
    {
        printf ("masukkan anka antara 1 dan 10:\n");
        scanf ("%d", &angka);
    }
    while (angka < 1 || angka > 10);

    printf ("angka yang Anda masukkan adala %d. Angka ini valid", angka);
return 0;
}
