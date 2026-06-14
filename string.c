#include <stdio.h>
#include <string.h>
// typedef
//{
//     char huruf[50];
// }
// string;
int main()
{
    //     char str[50];
    //     scanf("%s", &str);
    //     int i;
    //     printf("%s\n", str);
    //     for (i = 0; i < strlen(str); i++)
    //     {
    //         printf("%c\n", str[i]);
    //     }
    //     return 0;
    // }

    // #include <stdio.h>
    // #include <string.h>
    // int main(){
    // char str[50];
    // scanf("%s", &str);
    // int i, jumlah = 0;
    // for(i=0; i<strlen(str);i++){
    //     if((str[i] == 'a') || (str[i] == 'i')
    //     || (str[i] == 'u')
    //     || (str[i] == 'e') || (str[i] == 'o')){
    // jumlah++;
    // }
    // }
    // printf("%d\n", jumlah);
    // return 0;
    // }

    // #include <stdio.h>
    // #include <string.h>
    // int main()
    //{
    //     char str1[50];
    //     char str2[50];
    //     scanf("%s", &str1);
    //     strcpy(str2, str1);
    //     int i;
    //     for (i = 0; i < strlen(str2); i++)
    //     {
    //         printf("%c\n", str2[i]);
    //         printf("%c\n", str2[i]);
    //     }
    //     return 0;
    // }

    // #include <stdio.h>
    // #include <string.h>
    // int main(){
    // char str1[50];
    // char str2[50];
    // scanf("%s", &str1);
    // scanf("%s", &str2);
    // if(strcmp(str1, str2) == 0){
    // printf("string sama\n");
    // }else{
    // printf("string tidak sama\n");
    // }
    // return 0;
    // }

    // #include <stdio.h>
    // #include <string.h>
    // int main()
    //{
    // char str[50];
    // scanf("%s", &str);
    // int i, jumlah = 0;
    // for (i = 0; i < strlen(str); i++)
    //{
    // if (
    //(str[i] == '1') ||
    //(str[i] == '2') ||
    //(str[i] == '3') ||
    //(str[i] == '4') ||
    //(str[i] == '5') ||
    //(str[i] == '6') ||
    //(str[i] == '7') ||
    //(str[i] == '8') ||
    //(str[i] == '9') ||
    //(str[i] == '0'))
    //{
    // jumlah++;
    //}
    // printf("%d\n", jumlah);
    // return 0;
    //}
    //}

    // #include <stdio.h>
    // #include <string.h>
    // int main()
    //{
    //     char str[50];
    //     scanf("%s", &str);
    //     int i, j, spasi = 0;
    //     for (i = 0; i < strlen(str); i++)
    //     {
    //         for (j = 0; j < spasi; j++)
    //         {
    //             printf(" ");
    //         }
    //         printf("%c\n", str[i]);
    //         spasi++;
    //     }
    //     return 0;
    // }

//     #include <stdio.h>
//     #include <string.h>
//     int main()
//    {
//    char str[50];
//    scanf("%s", &str);
//    int i, j, spasi = 0;
//    for (i = 0; i < strlen(str); i++)
//    {
//        for (j = i; j < strlen(str); j++)
//        {
//            printf(" ");
//        }
//        printf("%c\n", str[i]);
//        spasi++;
//    }
//    return 0;
//}
char str[50];
scanf("%s", &str);
int i, j, spasi = 0;
for (i = 0; i < strlen(str); i++)
{
    for (j = i; j < strlen(str); j++)
    {
        printf(" ");
    }
    printf("%c\n", str[i]);
    spasi++;
}

// declare str1 & str 2
char str1[51], str2[51];
// inisisai string1
scanf("%s", str1);
// inisiasi string2
strcpy(str2, "tenxi pengen martabak");

// outtput sebelum copied
printf("\nsebelum copied\n");
printf("strin 1: %s\n", str1);
printf("string 2: %s\n", str2);

// proses penyalinan
strcpy(str2, str1);

// output sesudah copied
printf("\nsesudah copied\n");
printf("strin 1: %s\n", str1);
printf("string 2: %s\n", str2);

return 0;
}
