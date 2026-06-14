#include <stdio.h>
#include <string.h>

int main()
{

    //    int n;
    //    scanf("%d", &n);
    //    int tabint[n];
    //    int i;
    //    int penghitung;
    //    for (i = 0; i < n; i++)
    //    {
    //        scanf("%d", &tabint[i]);
    //    }
    //    int min = tabint[n];
    //    // int jumlah = 0;
    //    for (i = n; i >= 0; i--)
    //    {
    //        if (min > tabint[i])
    //        {
    //            min = tabint[i];
    //        }
    //        // if (tabint[i] % 2 == 1)
    //        //{
    //        // printf("%d ", tabint[i]);
    //        // jumlah++;
    //        //}
    //    }
    //    printf("%d\n", min);

    /*praktik*/
    //int n;
    //scanf("%d", &n);
    //int array[n];
    //for (int i = 0; i < n; i++)
    //{
        //printf("masukkan nilai array index ke-%d: ", i);
        //scanf("%d", &array[i]);
    //}
//
    //int total = 0;
    //for (int j = 0; j < n; j++)
    //{
        //total += array[j];
    //}
//
    //int max = array[0];
    //int min = array[0];
    //for (int k = 0; k < n; k++)
    //{
        //if (array[k] < min)
        //{
            //min = array[k];
        //}
        //if (array[k] > max)
        //{
            //max = array[k];
        //}
    //}
//
    //printf("total nilai array: %d\n", total);
    //printf("nilai min array: %d\n", min);
    //printf("nilai max array: %d\n", max);

    int n;
    scanf ("%d", n);
    int arr[n];
    int jumlah;

    for (int i = 0; i < n; i++)
    {
        scanf("%d", arr[i]);
    }

    for (int i = 0; i < n; i++) {
        jumlah += arr[i];
    }

    printf ("%d", jumlah);
    return 0;
}
