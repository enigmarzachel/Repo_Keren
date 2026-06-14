/*
Saya Fatih Al-Ghifari Akbar Hasani dengan NIM 2508890 mengerjakan Tugas Praktikum 1
dalam mata kuliah Dasar-Dasar Pemrograman untuk keberkahanNya maka saya
tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin
*/
#include <stdio.h>


int main () {
    /*untuk menyediakan variabel*/
    int p; // variabel porsi
    int pag, sia, mlm; // variabel waktu
    char wkt; // variabel waktu juga
    int but; //variabel porsi yang dibutuhkan
    int tot; //variabel total porsi

    /*untuk input dari user*/
    scanf ("%d", &p);
    scanf ("%d %d %d", &pag, &sia, &mlm);
    scanf (" %c", &wkt);
    
    /*pengkondisian untuk porsi yang dibutuhkan*/
    if (wkt == 'P') {
        but = 2 * (pag + sia + mlm) + 2 * 50;
        pag++;
    }
    else if (wkt == 'S') {
        but = 2 * (pag + sia + mlm) + 2 * 75;
        sia++;
    }
    else if (wkt == 'M') {
        but = 2 * (pag + sia + mlm) + 2 * 150;
        mlm++;
    }
    else {
        but = 2 * (pag + sia + mlm);
    }

    tot = pag + sia + mlm; //untuk total uma musume
    
    /*untuk output*/
    printf ("*-------------------------------------------------------*\n");
    printf ("Jumlah porsi yang disiapkan: %d porsi\n", p);
    printf ("Jumlah porsi yang dibutuhkan: %d porsi\n", but);
    printf ("*-------------------------------------------------------*\n");
    printf ("Jumlah umamusume yang datang:\n");
    printf ("- pagi: %d\n", pag);
    printf ("- siang: %d\n", sia);
    printf ("- malam: %d\n", mlm);
    printf ("Total: %d umamusume\n", tot);
    printf ("*-------------------------------------------------------*\n");

    /*untuk menentukan output tergantung kehadiran oguri*/
     if (wkt == 'P' || wkt == 'S' || wkt == 'M') {
        printf ("Alamak!!! Anomali Oguri datang!!!\nSemua staff bersiap untuk badai!!!\n");
     }
     else if (wkt == 'N') {
        printf ("Alhamdulillah anomali Oguri tidak datang.\nSemua staff bisa bersantai sejenak.\n");
     }

    printf ("*-------------------------------------------------------*\n");


    if (p >= but) {
        printf ("Alhamdulillah porsi yang disiapkan cukup untuk semua!\nSemua umamusume menjadi riang dan gembira!\n");
    }
    else if ((wkt == 'P' || wkt == 'S' || wkt == 'M') && (p <= but)) {
        printf ("Alamak! Porsinya pada diabisin Oguri Wak!!\nIngfokan kepada Symboli Rudolph untuk menambah anggaran!\n");
    }
    else if (wkt == 'N') {
        printf ("Alamak! Porsi yang disiapkan ternyata tidak cukup!!\nIngfokan kepada Symboli Rudolph untuk menambah anggaran!\n");
    }
    printf ("*-------------------------------------------------------*\n");
    return 0;
}