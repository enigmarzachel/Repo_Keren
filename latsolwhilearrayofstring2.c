#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    scanf("%d", &n);
    char kata[n][51];

    for (int i = 0; i < n; i++)
    {
        int panjang = strlen(kata[i]);
        for (int j = 0; j < panjang; j++)
        {
            scanf(" %c", &kata[i][j]);
        }
    }

    // int panjang = 0;

    // for (int i = 0; i < n; i++)
    //{
    // int panjang = strlen(kata);
    // }

    for (int i = 0; i < n; i++)
    {
        int panjang = strlen(kata[i]);
        for (int j = 0; j < panjang; j++)
        {
            if (kata[i][j] >= 97)
            {
                kata[i][j] -= 32;
            }
        }
    }

    for (int i = 0; 0 < n; i++)
    {
        int panjang = strlen(kata[i]);
        for (int j = 0; j < panjang;)
        {
            printf("%c", kata[i][panjang]);
        }
    }
    return 0;
}