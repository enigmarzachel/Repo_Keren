#include <stdio.h>

int main()
{
    int leb;
    int ting;
    char hia;

    scanf("%d %d  %c", &leb, &ting, &hia);

    int tingdaun = leb / 2 + 1;

    for (int i = 0; i < tingdaun; i++)
    {
        for (int j = i; j < tingdaun - 1; j++)
        {
            printf(" ");
        }
        for (int k = 0; k < (2 * i + 1); k++)
        {
            printf("*");
        }
        printf("\n");
    }

    int lebarbatang = leb / 3;
    for (int i = 0; i < ting; i++)
    {
        for (int j = 0; j < (leb - (lebarbatang)) / 2; j++)
        {
            printf(" ");
        }
        for (int k = 0; k < lebarbatang; k++)
        {
            printf("%c", hia);
        }
        printf("\n");
    }
    for (int i = 0; i < leb; i++)
    {
        printf("=");
    }
    printf("\n"); /**/
    return 0;
}