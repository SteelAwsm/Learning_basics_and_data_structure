#include <stdio.h>
#include <string.h>

/* Soal1
void numeration(int a, int b, int *c)
{
    *c= a + b;
}

int main()
{
    int a;
    int b;
    int c;

    printf ("Program Dimulai \ninput '0' ke dalam kedua variabel untuk keluar\n");
    while(true)
    {
        printf ("input = ");
        scanf("%d",&a);
        printf ("input = ");
        scanf("%d",&b);

        if (a == 0 && b == 0)
        {
            break;
        }
        else
        {
            numeration(a,b,&c);
            printf("%d\n", c);
        }
    }
    printf ("Program Selesai");
    return 0;
}
*/

/* Soal 2
struct unmahasiswa {
    char nama[100];
    int matematika;
    int ipa;
    int bindonesia;
    int binggris;
};

int main()
{
    int a;
    int b;
    int c;
    char namam[100];
    printf ("Program Dimulai \ninput '0' ke dalam kedua variabel untuk keluar\n");
    while(true)
    {
        printf ("input = ");
        scanf("%d",&a);
        struct unmahasiswa arr[a];
        if (a == 0)
        {
            break;
        }
        else
        {
            for (int i = 0; i < a; i++)
            {
                printf ("input nama siswa ke-%d = ", i+1);
                scanf("%s",&(arr[i].nama));
                printf ("input nilai matematika       = ");
                scanf("%d",&(arr[i].matematika));
                printf ("input nilai ipa              = ");
                scanf("%d",&(arr[i].ipa));
                printf ("input nilai bahasa Indonesia = ");
                scanf("%d",&(arr[i].bindonesia));
                printf ("input nilai bahasa Inggris   = ");
                scanf("%d",&(arr[i].binggris));
            }

            printf ("input jumlah display nilai UN= ");
            scanf("%d",&c);
            for (int j = 0; j < c; j++)
            {
                printf ("input Nama mahasiswa yang ingin dicari= ");
                scanf ("%s",&namam);
                for (int k = 0; k < a; k++)
                {
                    if (strcmp(arr[k].nama, namam) == 0)
                    {
                        printf ("Nilai %s\n", arr[k].nama);
                        printf ("Matematika       : %d\n", arr[k].matematika);
                        printf ("Ipa              : %d\n", arr[k].ipa);
                        printf ("Bahasa Indonesia : %d\n", arr[k].bindonesia);
                        printf ("Bahasa Inggris   : %d\n", arr[k].binggris);
                        break;
                    }
                    else if (k+1==a)
                    {
                        printf ("Nilai %s tidak ditemukan\n", namam);
                        break;
                    }
                    else if (strcmp(arr[k].nama, namam) != 0)
                    {
                        continue;
                    }
                }
            }
        }
    }
    printf ("Program Selesai");
    return 0;
}
*/

/* Soal 3
void reversee(int *arr, int a)
{
    int temp;
    for (int i = 0; i<a/2; i++)
    {
        temp = arr[i];
        arr[i] = arr[a-i-1];
        arr[a-i-1] = temp;
    }
}

int main()
{
    int a;
    printf ("Program Dimulai \ninput '0' ke dalam kedua variabel untuk keluar\n");
    while (true)
    {
        printf ("Jumlah elemen array= ");
        scanf("%d",&a);
        if (a == 0)
        {
            break;
        }
        else
        {
            int arr[a];
            for (int i = 0; i < a; i++)
            {
                scanf ("%d", &arr[i]);
            }
            reversee(arr,a);
            for (int j = 0; j < a; j++)
            {
                printf ("%d ", arr[j]);
            }
            printf("\n");
        }
    }
    printf ("Program Selesai");
    return 0;
}
*/
