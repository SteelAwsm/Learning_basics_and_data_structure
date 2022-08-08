#include <iostream>

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
