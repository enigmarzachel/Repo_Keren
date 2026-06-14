#include <stdio.h>
#include <string.h>

// int jumlahA(char str[]);

// int jumlahA(char str[])
//{
//     int i, j = 0;
//     for (i = 0; i < strlen(str); i++)
//     {
//         if ((str[i] == 'a') || (str[i] == 'A'))
//         {
//             j++;
//         }
//     }
//     return j;
// }

// int main()
//{
//     int hasil;
//     char str[50];
//     scanf("%s", &str);
//     hasil = jumlahA(str);
//     printf("%d\n", hasil);

//    scanf("%s", &str);
//    printf("%d\n", jumlahA(str));

//    return 0;
//}

int jumlah(int nilai[]);

int jumlah(int nilai[])
{
    int total;
    int i, n;
    for (i = 0; i < n; i++)
    {
        total += nilai[i];
    }
    return total;
}

int main()
{
    int hasil;
    int n;
    scanf("%d", &n);
    int nilai[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &nilai[i]);
    }
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &nilai[i]);
    }
    return 0;
}