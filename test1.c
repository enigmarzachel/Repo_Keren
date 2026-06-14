#include <stdio.h>
//library untuk menggunakan fungsi sqrt() dalam perhitungan luas
#include <math.h>

//fungsi bantu untuk mengurutkan tiga sisi dari terkecil ke terbesar, untuk mempermudah validasi dan perbandingan segitiga.
void urutkanSisi(int *a, int *b, int *c) {
    int temp;
    if (*a > *b) { temp = *a; *a = *b; *b = temp; }
    if (*b > *c) { temp = *b; *b = *c; *c = temp; }
    if (*a > *b) { temp = *a; *a = *b; *b = temp; }
}

//fungsi untuk menghitung luas segitiga menggunakan Rumus Heron
double hitungLuas(int a, int b, int c) {
    //setengah keliling
    double s = (a + b + c) / 2.0;
    //Rumus Heron
    double luas = sqrt(s * (s - a) * (s - b) * (s - c));
    return luas;
}

int main() {
    //membuat variabel sisi-sisi segitiga pertama
    int s1a, s1b, s1c;
    //membuat variabel sisi-sisi segitiga kedua
    int s2a, s2b, s2c;

    //memasukkan inputan
    scanf("%d %d %d", &s1a, &s1b, &s1c);
    scanf("%d %d %d", &s2a, &s2b, &s2c);

    //mengurutkan sisi masing-masing segitiga
    urutkanSisi(&s1a, &s1b, &s1c);
    urutkanSisi(&s2a, &s2b, &s2c);

    //memastikan sebuah segitiga valid jika jumlah dua sisi terpendeknya lebih besar dari sisi terpanjang
    int valid1 = (s1a + s1b > s1c);
    int valid2 = (s2a + s2b > s2c);

    //jika salah satu atau keduanya tidak valid, maka output "tidak sama"
    if (!valid1 || !valid2) {
        printf("tidak sama\n");
        //program langsung terhenti
        return 0;
    }

    //membuktikan bahwa segitiga sudah sama, lalu sekarang identifikasi jenisnya
    if (s1a == s2a && s1b == s2b && s1c == s2c) {
        //cek apakah segitiga sama sisi
        if (s1a == s1c) {
            printf("segitiga sama sisi\n");
        }
        //cek apakah segitiga siku-siku (Teorema Pythagoras)
        else if (s1a * s1a + s1b * s1b == s1c * s1c) {
            printf("segitiga siku-siku\n");
        }
        //cek apakah segitiga sama kaki
        else if (s1a == s1b || s1b == s1c) {
            printf("segitiga sama kaki\n");
        }
        //jika bukan salah satu dari di atas maka segitiga sembarang
        else {
            printf("sama\n");
        }
    }
        
    //logika perbandingan luas tetap sama
    double luas1 = hitungLuas(s1a, s1b, s1c);
    double luas2 = hitungLuas(s2a, s2b, s2c);

    if ((int)luas1 > (int)luas2) {
        printf("segitiga pertama\n");
    } else {
        printf("segitiga kedua\n");
    }

    return 0;
}