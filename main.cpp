#include <iostream>
#include <stdio.h>
#include <math.h>

using namespace std;


/* Soal 1
int factorial(int n)
{
    if (n == 0) return 1;       // base case
    return (n * factorial(n-1)); // recursive case
}

int main()
{
    int n;
    printf ("Program Dimulai \ninput '0' untuk keluar\n");
    while(true)
    {
        printf ("input = ");
        scanf("%d",&n);
        if (n == 0)
        {
            break;
        }
        else
        {
            printf("%d\n", factorial(n));
        }
    }
    printf ("Program Selesai");
    return 0;
}
*/

/* Soal 2
int numpattern(int n)
{
    if (n == 0) return 0;       // base case
    else if (n==1) return 1;
    return (n*n+numpattern(n-1)); // recursive case //Thanks Naufal for helping me bruh
}

int main()
{
    int n;
    printf ("Program Dimulai \ninput '0' untuk keluar\n");
    while(true)
    {
        printf ("input = ");
        scanf("%d",&n);
        if (n == 0)
        {
            break;
        }
        else
        {
            printf("%d\n", numpattern(n));
        }
    }
    printf ("Program Selesai");
    return 0;
}
*/

/* Soal 3
void maxmin(int arr[], int a)
{
    int flag = 0;
    int flag1 = 0;

    for (int i = 0; i < a; i++)
    {
        if (flag == 1)
        {
            break;
        }
        else
        {
            for (int j = 0; j < a; j++)
            {
                if (arr[j] > arr[i])
                {
                    break;
                }
                else if (j+1 == a)
                {
                    printf ("max: %d\n", arr[i]);
                    flag = 1;
                    break;
                }
                else
                {
                    continue;
                }
            }
        }
    }
    for (int k = 0; k < a; k++)
    {
        if (flag1 == 1)
        {
            break;
        }
        else
        {
            for (int l = 0; l < a; l++)
            {
                if (arr[k] > arr[l])
                {
                    break;
                }
                else if (l+1 == a)
                {
                    printf ("min: %d\n", arr[k]);
                    flag1 = 1;
                    break;
                }
                else
                {
                    continue;
                }
            }
        }
    }
}

int main()
{
    int a;
    printf ("Program Dimulai \ninput '0' untuk keluar\n");
    while(true)
    {
        printf ("Jumlah elemen array = ");
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
            maxmin(arr, a);
        }
    }
    printf ("Program Selesai");
    return 0;
}
*/
