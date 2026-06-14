/*
Saya Fatih Al-Ghifari Akbar Hasani dengan NIM 2508890 mengerjakan Tugas Praktikum 3
dalam mata kuliah Dasar-Dasar Pemrograman untuk keberkahanNya maka saya
tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin
*/
#include <stdio.h>
#include <string.h>
int main()
{
    // sebagai variabel untuk jumlah lap
    int n;
    // meminta input agar jumlah lap dapat dinamis
    scanf("%d", &n);
    char nama1[50];
    char tim1[50];
    int poin1[n];
    char nama2[50];
    char tim2[50];
    int poin2[n];
    char tim_bebas[50];
    /*meminta input nama dan tim pembalap pertama*/
    scanf("%s", &nama1);
    scanf("%s", &tim1);
    /*meminta input untuk poin setiap lap milik pembalap pertama dengan
    jumlah lap adalah n lap seperti yang dimasukkan*/
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &poin1[i]);
    }

    scanf("%s", &nama2);
    scanf("%s", &tim2);
    /*meminta input untuk poin setiap lap milik pembalap kedua dengan
    jumlah lap adalah n lap seperti yang dimasukkan*/
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &poin2[i]);
    }

    // untuk input tim yang bebas dari denda
    scanf("%s", &tim_bebas);
    // sebagai wadah untuk total poin dari pembalap peratma
    int total_poin1 = 0;
    /*menggunakan perulangan for untuk menjumlahkan poin poin pembalap
    pertama*/
    for (int i = 0; i < n; i++)

    {
        total_poin1 += poin1[i];
    }

    // sebagai wadah untuk total poin dari pembalap kedua
    int total_poin2 = 0;
    /*menggunakan perulangan for untuk menjumlahkan poin poin pembalap
    kedua*/
    for (int i = 0; i < n; i++)
    {
        total_poin2 += poin2[i];
    }

    /*variabel menentukan pembalap yang menang, jika variabel pembalap1_win,
    maka pembalap 1 menang, begitupun sebaliknya*/
    int pembalap_winner = 0;
    // int pembalap2_win = 0;
    /*untuk menghitung barapa banyak poin 100 setiap pembalap*/
    int perfect_race1 = 0;
    int perfect_race2 = 0;
    /*menghitung total jumlah poin setiap pembalap yang berindex genap*/
    int total_index_genap1 = 0;
    int total_index_genap2 = 0;
    /*penkondisian untuk menentukan pemanang*/
    if (total_poin1 > total_poin2)
    {
        pembalap_winner++;
    }
    else if (total_poin1 == total_poin2)
    {
        /*pengkondisian jika total jumlah poin sama*/
        for (int i = 0; i < n; i++)
        {
            if (poin1[i] == 100)
            {
                perfect_race1++;
            }
            if (poin2[i] == 100)
            {
                perfect_race2++;
            }
        }
        if (perfect_race1 > perfect_race2)
        {
            pembalap_winner++;
        }
        else
        {
            /*pengkondisian jika total jumlah poin seimbang dan banyaknya poin
            sempurna milik setiap pembalap*/
            for (int j = 0; j < n; j++)
            {
                if (j % 2 == 0)
                {
                    total_index_genap1 += poin1[j];
                    total_index_genap2 += poin2[j];
                }
            }
        }
        
    }
    if (total_index_genap1 > total_index_genap2)
        {
            pembalap_winner++;
        }

    // membuat variavel baru untuk menampung nama pemenang dan tim pemenang
    int panjang_tim1 = strlen(tim1);
    int panjang_tim2 = strlen(tim2);
    int o;
    if (pembalap_winner == 1)
    {
        o = panjang_tim1 + 1;
    }
    else
    {
        o = panjang_tim2 + 1;
    }
    char pemenang[50];
    char tim_pemenang[o];
    if (pembalap_winner == 1)
    {
        strcpy(pemenang, nama1);
        strcpy(tim_pemenang, tim1);
    }
    else
    {
        strcpy(pemenang, nama2);
        strcpy(tim_pemenang, tim2);
    }
    tim_pemenang[o - 1] = '\0';

    // menghitung panjang sebuah string
    int panjang_nama = strlen(pemenang);

    // variabel untuk nama pemenang yang sudha dibalikkan
    char nama_dibalik[50];
    // membalikkan nama pemenang
    int d = panjang_nama;
    for (int i = 0; i < panjang_nama; i++)
    {
        nama_dibalik[i] = pemenang[d - 1];
        d--;
    }
    nama_dibalik[panjang_nama] = '\0';

    // sebagai wadah untuk string nama yang sudah dibalikkan dan sudah ditukar
    char nama_ditukar[51];
    int f = 1;
    int e = 0;
    /*perulangan untuk menukar posisi huruf bersebelahan*/
    for (int i = 0; i < panjang_nama; i++)
    {
        /*pengkondisian untuk memulai character berindex genap dari 1 dan
        jika berindex ganjil maka adan dimulai dari 0 lalu ditambah 2 karena
        ganjil ditambah 2 akan selalu ganjil dan begitu juga dengan genap */
        if (i % 2 == 0)
        {
            nama_ditukar[i] = nama_dibalik[f];
            f += 2;
        }
        if (i % 2 == 1)
        {
            nama_ditukar[i] = nama_dibalik[e];
            e += 2;
        }
        /*pengkondisian jika panjang string pemanang ganjil maka
        huruf terakhir dibiarkan sendiri.*/
        if (panjang_nama % 2 == 1)
        {
            nama_ditukar[panjang_nama - 1] = nama_dibalik[panjang_nama - 1];
        }
    }
    nama_ditukar[panjang_nama] = '\0';

    /*pengkondisian untuk mengubah character kapital menjadi kecil
    dan sebaliknya serta mengubah charakter konsonan menjadi '*'*/
    for (int i = 0; i < panjang_nama; i++)
    {
        if ((i % 2 == 1) && (122 >= nama_ditukar[i]) && (nama_ditukar[i] >= 97))
        {
            nama_ditukar[i] -= 32;
        }
        if ((i % 2 == 0) && (90 >= nama_ditukar[i]) && (nama_ditukar[i] >= 65))
        {
            nama_ditukar[i] += 32;
        }
        if (nama_ditukar[i] == 'A' || nama_ditukar[i] == 'I' ||
            nama_ditukar[i] == 'U' || nama_ditukar[i] == 'E' ||
            nama_ditukar[i] == 'O' || nama_ditukar[i] == 'a' ||
            nama_ditukar[i] == 'i' || nama_ditukar[i] == 'u' ||
            nama_ditukar[i] == 'e' || nama_ditukar[i] == 'o')
        {
            nama_ditukar[i] = nama_ditukar[i];
        }
        else
        {
            nama_ditukar[i] = '*';
        }
    }
    int panjang_nama_akhir = strlen(nama_ditukar) + 1;
    nama_ditukar[panjang_nama_akhir] = '\0';

    /*untuk menampilkan output*/
    printf("WOw!! PerTarungan yang sangat Sengit\n");
    /*menentukan apa yang harus ditampilkan jika pemenang adalah pemabalap 1
    dan jika pemenangnya adalah pembalap 2*/
    if (pembalap_winner == 1)
    {
        printf("\nW0w!!! Pemenangnya adlah %s!!!!\n", nama_ditukar);
        printf("\nini nggak bo0ng, sumpahh, dia keren bgt\n\n");
    }
    else if (pembalap_winner == 0)
    {
        printf("\nWOw!!! Pemenangnya adlah %s!!!\n", nama_ditukar);
        printf("\nini nggak boOng, sumpahh, dia keren bgt\n\n");
    }
    /* menentukan pembalap mana yang kena denda dan jika memang pembalap tersebut
    kena denda berapa jumlah yang harus dibayarkan*/
    if (strcmp(tim_bebas, tim_pemenang) == 0)
    {
        printf("Ternyta %s bebas dari denda Pulici!", nama_ditukar);
    }
    else if (strcmp(tim_bebas, tim_pemenang) < 0)
    {
        printf("Ternyta %s harus bayar denda $7,000!", nama_ditukar);
    }
    else
    {
        printf("Ternyta %s harus bayar denda $15,000!", nama_ditukar);
    }
    printf("\n");
    return 0;
}