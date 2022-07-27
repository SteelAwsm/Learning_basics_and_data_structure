#include <iostream>

using namespace std;

//Soal1
/*
int main()
{
    int a;
    printf ("Program Dimulai \ninput '0' untuk keluar\n");
    while(true)
    {
        printf ("input = ");
        scanf("%d",&a);
        if (a == 0)
        {
            break;
        }
        else if (a%2 == 0)
        {
            printf("Genap\n");
        }
        else if (a%2 != 0)
        {
            printf("Ganjil\n");
        }
    }
    printf ("Program Selesai");
    return 0;
}
*/

//Soal2
/*
int main()
{
    int a;
    int i;
    printf ("Program Dimulai \ninput '0' untuk keluar\n");
    while(true)
    {
        printf ("input = ");
        scanf("%d",&a);
        if (a == 0)
        {
            break;
        }
        else
        {
            for (i=1;i<=a;i++)
            {
             if (i%2 != 0)
             {
                printf("%d ", i);
             }
            else if (i%2 == 0)
             {
                printf("* ");
             }
            }
            printf ("\n");
        }
    }
    printf ("Program Selesai");
    return 0;
}
*/

//Soal3
/*
int main()
{
    int total_num;
    int i=0;
    int m=0;
    int j=0;
    int flag=0;
    printf ("Program Dimulai \ninput '0' untuk keluar\n");
    while(true)
    {
        printf ("input = ");
        scanf("%d",&total_num);
        if (total_num == 0)
        {
            break;
        }
        else
        {
            for (i=1;i<=total_num;i++)
            {
                flag=0;
                m=i/2;
                for(j=2;j<=m;j++)
                {
                    if(i%j == 0)
                    {
                        printf("%d ", i);
                        flag=1;
                        break;
                    }
                }
                if(flag==0)
                printf("* ");
            }
        }
            printf ("\n");
    }
    printf ("Program Selesai");
    return 0;
}
*/

//Soal 4
/*
int main()
{
  int n;
  int i;
  int j;
  printf ("Program Dimulai \ninput '0' untuk keluar\n");
  while(true)
  {
      printf ("input =\n");
      scanf ("%d", &n);
      if (n == 0)
      {
          break;
      }
      else
      {
          int arr[n];
          for(i=0;i<n;i++)
          {
              scanf("%d", &arr[i]);
          }
          for(j=n-1;j>=0;j--)
          {
              printf("%d\n", arr[j]);
          }
      }
      printf ("\n");
  }
  printf ("Program Selesai");
  return 0;
}
*/


