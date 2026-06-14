/*
Saya Fatih Al-Ghifari Akbar Hasani dengan NIM 2508890 mengerjakan Tugas Praktikum 2
dalam mata kuliah Dasar-Dasar Pemrograman untuk keberkahanNya maka saya
tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin
*/
#include <stdio.h>

typedef struct
{
    int tinggi, gap, panjang; /*sebagai struktur untuk variebel musuh*/
} musuh;
int main()
{
    musuh inner, shadow;/*variebel umum*/
    int tinggiawal;
    char paket;
    int dukungan;
    int gap;
    int panjang;
    char asciiekor = 'A'; /*variable ascii*/
    char asciibadan = 'A';
/*input dari user*/
    scanf("%d  %c", &tinggiawal, &paket);
    scanf("%d %d %d", &inner.tinggi, &inner.gap, &inner.panjang);
    scanf("%d %d %d", &shadow.tinggi, &shadow.gap, &shadow.panjang);
    scanf("%d", &dukungan);

/*untuk menentukan stat sesuai paket yang dipilih*/
    switch (paket)
    {
    case 'C':
        gap = 8;
        panjang = 16;
        break;
    case 'S':
        gap = 6;
        panjang = 14;
        break;
    case 'V':
        gap = 4;
        panjang = 12;
        break;
    }
//untuk menentukan dukungan yang dipilih
    switch (dukungan)
    {
    case 1:
        tinggiawal += 4;
        printf("Kemampuan Aktif: Upgunned Armaments! Rangka diperkuat dan daya tembak ditingkatkan.\n");
        break;
    case 2:
        panjang += 2;
        printf("Kemampuan Aktif: Advanced Maneuvering! Agilitas helikopter ditingkatkan.\n");
        break;
    case 3:
        inner.gap += 4;
        shadow.gap += 4;
        printf("Kemampuan Aktif: Counter-UAV System! Profil sensor musuh berhasil dikacaukan.\n");
        break;
    }

    printf("\n--- VISUALISASI AH-7 VULTURE ---\n");
    /*
    input1: 25 & 25
    input2: 27 & 26
    input3: 23 & 16
    */
//untuk visualisasi baling baling
    for (int i = 1; i <= tinggiawal + panjang + 2; i++)
    {
        printf(" ");
    }
    for (int i = 1; i <= (((gap * (tinggiawal / 2)) - 2) + (gap / 2)); i++)
    {
        printf("<");
    }
    for (int i = 1; i <= (((gap * (tinggiawal / 2)) - 2) + (gap / 2)); i++)
    {
        printf(">");
    }
    printf("\n");

    /*
    input1 :4
    input2: 3
    input3: 4*/

    //untuk visualisasi heliheli bagian atas
     for (int i = 1; i <= tinggiawal / 2 + 1; i++)
    {
         for (int j = i; j <= tinggiawal / 2; j++)
         {
             printf(" ");
         }
         for (int k = 1; k <= (2 * i) - 1; k++)
         {
             printf("%c", asciiekor);
             asciiekor++;
             if (asciiekor > 'Z')
             {
                 asciiekor = 'A';
             }
         }
         for (int l = 1; l <= panjang; l++)
         {
             if ((i == tinggiawal / 2 + 1) || (i == tinggiawal / 2))
             {
                 printf(")");
             }
             else
             {
                 printf(" ");
             }
         }
         for (int m = i; m <= tinggiawal / 2; m++)
         {
             printf(" ");
         }
         for (int n = 0; n < ((tinggiawal / 2) + 1 - i) * gap; n++)
         {
             printf(" ");
         }
         for (int k = 1; k <= ((2 * i) - 1) * gap; k++)
         {
             printf ("%c",asciibadan);
         }
         asciibadan++;
         printf("\n");
     }


     //untuk visualisasi heliheli bagian bawah tapi gagal
    //for (int i = tinggiawal/2; i >= 1; i++)
    //{
    //    for (int j = tinggiawal / 2; j >= i; j--)
    //    {
    //        printf("-");
    //    }
    //    for (int k = (2 * i) - 1; k >= 1; k--)
    //    {
    //        printf("%c", asciiekor);
    //        asciiekor++;
    //        if (asciiekor > 'Z')
    //        {
    //            asciiekor = 'A';
    //        }
    //    }
    //    for (int l = panjang; l >= 1; l--)
    //    {
    //        if ((i == tinggiawal / 2 + 1) || (i == tinggiawal / 2))
    //        {
    //            printf(")");
    //        }
    //        else
    //        {
    //            printf("-");
    //        }
    //    }
    //    for (int m = i; m >= tinggiawal / 2; m--)
    //    {
    //        printf("-");
    //    }
    //    for (int n = ((tinggiawal / 2) + 1 - i) * gap; n > 0; n--)
    //    {
    //        printf("-");
    //    }
    //    for (int k = ((2 * i) - 1) * gap; k >= 1; k--)
    //    {
    //        printf("%c", asciibadan);
    //    }
    //    asciibadan++;
    //    printf("\n");
    //}

    printf("\n--- Spesifikasi Final AH-7 Vulture ---\n");
    printf("> Tinggi Rangka: %d\n", tinggiawal);
    printf("> Profil Sensor: %d\n", gap);
    printf("> Panjang Armor: %d\n", panjang);

    printf("\n--- DEBRIEFING MISI ---\n");
//menentukan hesil tempur
    if ((gap > inner.gap) && (panjang > inner.panjang))
    {
        printf("Vs. The Inner Circle -> Misi Sukses! Ancaman dinetralisir, wilayah udara berhasil diamankan.");
    }
    else if (((gap > inner.gap) && (panjang < inner.panjang)) || ((gap < inner.gap) && (panjang > inner.panjang)))
        return 0;
}